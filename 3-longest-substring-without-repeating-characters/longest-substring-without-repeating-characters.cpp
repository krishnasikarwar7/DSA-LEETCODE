class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int l=0;
        int res=0;
        unordered_set<int> sett;
        for(int r=0;r<n;r++)
        {
            while(sett.count(s[r]))
            {
                sett.erase(s[l]);
                l++;
            }
            sett.insert(s[r]);
            res=max(res,r-l+1);
        }
        return res;
    }
};