#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){


    fstream out;
    out.open("text.txt", ios::app);
    out << "code geass\n";
    
    string line;

    fstream in("text.txt");
    if(in.is_open()){
        while(getline(in, line)){
            cout << line << endl;
        }
    }

    if(out.is_open()){out.close();}



    return 0;
}
