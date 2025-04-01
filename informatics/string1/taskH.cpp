#include <iostream>
#include <string>
using namespace std;

int main(){

    string word;

    bool flag = true;

    word = "missim";

    for(int i = 0; i < word.size() / 2; i ++){
        

        if (word[i] != word[word.size()-i-1]){
            flag = false;
            break;
        }

    }

    if(flag){
        cout << "YES";
    }
    else {
        cout << "NO";
    }


    return 0;
}