#include <iostream>
#include <string>
using namespace std;

class Solution {

    public:
    
        bool isPalindrome(int x) {
            if(x < 0){
                return false;
            }
            string elder = to_string(x);
            string now = "";
            for(int i = elder.length() - 1; i >= 0; i--){
                now += elder[i];
            }
            if(elder == now){
                return true;
            }
            else{
                return false;
            }
        }
    };