#include <cmath>

class Solution { //самое медленное решение в мире

public:

    int mySqrt(int x) {
        
        if(x == 0 || x == 1){return x;}

        for(int i = 0; i < x-1; i++){
            
            if(pow(i, 2) == x){return i;}

            if(pow(i, 2) < x && pow(i+1, 2) > x){return i;}
        }
        return 1;
    }
};