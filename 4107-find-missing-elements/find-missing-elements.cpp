class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        int mini = nums[0], maxi = nums[0];
        for (int val : nums) {
            mini = min(mini, val);
            maxi = max(maxi, val);
        }
        unordered_set<int> st(nums.begin(), nums.end());

        vector<int> ans;

        for (int i = mini; i <= maxi; i++) {
            if (st.find(i) == st.end()) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};