#include <iostream>
#include <string>

using namespace std;



int main()
{


    int num = 0;
    string text;
    cin >> text;

    for(int i = 0; i < text.size(); i++){
        if(text[i] == 'I'){
            
            if(text[i+1] == 'V'){
                num += 4;
                i++;
            }
            else if(text[i+1] == 'X'){
                num += 9;
                i++;
            }
            else {num += 1;}
            
        }
        else if(text[i] == 'V'){
            num += 5;
        }
        else if(text[i] == 'X'){
            if(text[i+1] == 'L'){
                num += 40;
                i++;
            }
            else if(text[i+1] == 'C'){
                num += 90;
                i++;
            }
            else {num += 10;}
        }
        else if(text[i] == 'L'){
            num += 50;
        }
        else if(text[i] == 'C'){
            if(text[i+1] == 'D'){
                num += 400;
                i++;
            }
            else if(text[i+1] == 'M'){
                num += 900;
                i++;
            }
            else {num += 100;}
        }
        else if(text[i] == 'D'){
            num += 500;
        }
        else if(text[i] == 'M'){
            num += 1000;
        }
    }

}
