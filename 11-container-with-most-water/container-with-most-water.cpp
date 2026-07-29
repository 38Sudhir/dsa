class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0;
        int st = 0, end = height.size() - 1;

        while (st < end) {
            int w = end - st;
            int ht = min(height[st], height[end]);
            int currWater = w * ht;
            ans = max(ans, currWater);
            if (height[st] < height[end]) {
                st++;
            } else {
                end--;
            }
        }
        return ans;
    }
};