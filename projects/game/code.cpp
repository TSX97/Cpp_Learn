#include <iostream>
#include <map>
#include <string>
#include <cmath>
#include <random>
#include <chrono>
#include <limits>
using namespace std;



string what_is_difficulty_level(){

    cout << "what difficulty level do you choose? (for help enter 'h')" << endl;
    
    char difficulty;

    while(true){
        cin >> difficulty;

        switch(difficulty){
            case 'b':
                return "beginner";
            case 'm':
                return "medium";
            case 'e':
                return "expert";
            case 'h':
                cout << endl;
                cout << "    b - beginner" << endl;
                cout << "    m - medium" << endl;
                cout << "    e - expert" << endl;
                cout << "    h - this table" << endl;
                cout << endl;
            default: 
                cout << "try again, for help use 'h'" << endl;
        }
    }
}


map<string, int> dif_data_init(const string* dif) { //dif(ficulty)
    
    map<string, int> dif_data;
    
    if (*dif == "beginner") {
        dif_data["pow"] = 2;
    } 
    else if (*dif == "medium") {
        dif_data["pow"] = 3;
    } 
    else if (*dif == "expert") {
        dif_data["pow"] = 4;
    }
    dif_data["range"] = pow(10, dif_data["pow"]);
    dif_data["attempts"] = log2(dif_data["range"]) + dif_data["pow"];

    return dif_data;
}




int main() {

    string dif_level = what_is_difficulty_level();
    map<string, int> session_dif_data = dif_data_init(&dif_level);

    int* attempts = &session_dif_data["attempts"]; //определение уровня сложности
    int* range = &session_dif_data["range"]; //диапазон и кол-во попыток в зависимости от сложности 

    mt19937 generator(chrono::system_clock::now().time_since_epoch().count());
    uniform_int_distribution<int> distribution(1, *range);
    int target = distribution(generator);

    cout << "-----------------" << endl << dif_level << endl << "-----------------" << endl; //реализация рандома

    bool flag = false;
    int num;

    while(!flag){

        *attempts -= 1; //счетчик попыток
        if(*attempts <= 0){
            break;
        }
        cout << "Attemtps left: " << *attempts << " Enter a number: ";
        
        cin >> num;

        if(cin.fail()){ //обработка исключения при вводе другого типа данных 
            
            cout << "Invalid Input. Please enter a integer" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            *attempts += 1;

            continue;
        }

        if(num <= 0 || num >= *range){
            cout << "Invalid Input. Please enter a integer between 1 and " << *range << endl;
            *attempts += 1;
            continue;
        }

        if(num > target){
            cout << "try less!" << endl; //обработка угадывания пользователем числа
        } 
        else if(num < target){
            cout << "try more!" << endl;
        } 
        else {
            flag = true;
        }
    }

    if(flag){
        cout << "!!! WIN !!!" << endl;
    } else {
        cout << "Lose. Target is " << target << " Try Again." << endl;
    }
    return 0;
}