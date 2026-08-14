class Solution {
public:
    int maximumLengthSubstring(string s) {
        int res = 0, j = 0;

        unordered_map<char,int>m;

        for(int i = 0; i<s.size();i++){
            m[s[i]]++;

            while(m[s[i]]>2)
            m[s[j++]]--;
            res=max(res,i-j+1);
        }
        return res;
    }
};