#include <iostream>
#include <set>
#include <vector>
using namespace std;
class Solution {
    public:

    bool containsDuplicate(vector<int>& nums){
        set<int> st(nums.begin(), nums.end());
        if(st.size() == nums.size()){
            return false;
        }
        else{
            return true;
        }
    }
};