class Solution {
    public:
        int searchInsert(vector<int>& nums, int target) {
    
            int l = 0;
            int r = nums.size() - 1;
            int mid;
    
            while(l <= r){
                
                // if(nums[mid] + 1 == target){
                //     return mid + 1;
                // }
    
                mid = (l + r) / 2;
                
                if(nums[mid] == target){
                    return mid;
                }   
                if(nums[mid] < target){
                    l = mid + 1;
                }
                if(nums[mid] > target){
                    
                    r = mid - 1;
                }     
            }
            return l;
        }
    };