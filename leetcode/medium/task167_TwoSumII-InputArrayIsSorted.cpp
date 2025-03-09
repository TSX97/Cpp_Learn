#include <cmath>

class Solution { //алгоритм подходящий, но превышает время исполнения, пройдено 23/24 тестов(
//вернусь к ней когда изучу map 
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        const int size = numbers.size();
        vector<int> result;
        for(int i = 0; i < size; i++){
            for(int j = i; j < size; j++){

                if(numbers[i]+numbers[j] == target && i != j){
                    result.push_back(i+1);
                    result.push_back(j+1);
                    return result;
                }
            }
        }
    return {1, 2};    
    }
}; 