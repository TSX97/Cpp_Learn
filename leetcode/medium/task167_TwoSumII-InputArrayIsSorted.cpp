class Solution {
    public:
        vector<int> twoSum(vector<int>& numbers, int target) { //блять это решалось ебаным бинарным поиском
            int l = 0, r = numbers.size() - 1;
            while (r > l) {
                if (numbers[r] + numbers[l] == target) {
                    return {l + 1, r + 1};
                } else if (numbers[r] + numbers[l] > target) {
                    r--;
                } else {
                    l++;
                }
            }
            return {-1, -1};
        }
    };