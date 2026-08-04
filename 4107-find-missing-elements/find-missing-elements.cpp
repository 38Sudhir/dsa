class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        int mini = nums[0], maxi = nums[0];
        for (int val : nums) {
            mini = min(mini, val);
            maxi = max(maxi, val);
        }
        vector<int> freq(maxi - mini + 1, 0);

        for (int val : nums) {
            freq[val - mini]++;
        }

        vector<int> ans;

        for (int i = 0; i < freq.size(); i++) {
            if (freq[i] == 0) {
                ans.push_back(i + mini);
            }
        }

        return ans;
    }
};