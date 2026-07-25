class Solution {
public:
    int maxProduct(int n) {
        vector<int>nums;
        while(n>0){
            nums.push_back(n%10);
            n = n/10;
        }
        

        sort(nums.begin(), nums.end());
        int x = nums.size();

        return (nums[x-2]*nums[x-1]);
    }
};