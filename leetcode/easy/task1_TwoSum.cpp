#include <iostream>
#include <vector>
using namespace std;

class Solution {

    public:
    
        vector<int> twoSum(vector<int>& nums, int target) { //не умею работать с векторами к слову, не совсем понимаю что это + я это не проходил
            vector<int> result;
            int size = sizeof(nums) / sizeof(nums[0]); //я не вводил ебучую int size, я просто писал size(nums) в цикле, просто гитхаб ругается, тут версия другая
            for(int i = 0; i < size - 1;i++){ //а я хочу чтобы все красиво было
                for(int j = i; j < size - 1; j++){
                    if(nums[i]+nums[j] == target){
            
                        result.push_back(i);
                        result.push_back(j);
                        return result;
                    }
                }
                
    
            }
            return result;
            
        }
    };


