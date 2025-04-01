#include <iostream>
#include <string>
using namespace std;

int main(){

    int cnt = 1;

    string text = "I live in Perm";

    for(char elem : text){
        if (elem == ' '){
            cnt++;
        }
    }

    cout << cnt;


    return 0;
}