class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i<n; i++){
            if(nums[i]<nums[i+1] && nums[i+1]>nums[i+2]){
                return i+1;
            }
        }
        return -1;
    }
};