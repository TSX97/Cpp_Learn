class Solution {
public:
    int search(vector<int>& nums, int target) {
    
        int right = nums.size() - 1;
        int left = 0;
        int mid;
        while(left <= right ){
            // cout <<"m : " << mid << " | r : " << right << " | l : " << left << endl;
            mid = (right + left) / 2;
            
            if(nums[mid] == target){
                return mid;
            }
            if(nums[mid] > target){
                cout << nums[mid] << " > " << target << endl;
                right = mid - 1;
            }
            if(nums[mid] < target){
                cout << nums[mid] << " < " << target << endl;
                left = mid + 1;
                
            }
        }
        return -1;


    }
};