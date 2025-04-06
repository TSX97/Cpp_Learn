#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    
    for(int i = 0; i < 10; i++){
        fstream MyFile;
        MyFile.open("filename" + to_string(i) + ".txt");

        if (MyFile.is_open()) {
            MyFile << i;
            MyFile.close();
            cout << i << endl;
        } else {
            cerr << "Unable to open file: filename" + to_string(i) + ".txt" << endl;
        }
    }

    return 0;
}
