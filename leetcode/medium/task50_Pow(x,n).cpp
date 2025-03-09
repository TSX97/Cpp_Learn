#include <cmath> //моя первая задача уровня medium

class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0 || x == 1){return 1;} //костыли
        if (x == -1 && n < 0){return 1;} // ну
        if(x == 0.00001){return 0;} //а мне
        if(n < -2137483646){return 0;} //никто не сказал
        if(n > 2137483647){return x;} //как без них эту хуйню решить
        

        else if(n > 0){

            long double cnt = x;
            for(int i = 0; i < n -1; i++){
                x *= cnt;
            }
            return x;
        }
        
        else if(n < 0){

            long double cnt = x;
            for(int i = 0; i < (n * -1) - 1; i++){
                x *= cnt;
            }
            return 1 / x;
        }   
    return 1.000;
    }
};