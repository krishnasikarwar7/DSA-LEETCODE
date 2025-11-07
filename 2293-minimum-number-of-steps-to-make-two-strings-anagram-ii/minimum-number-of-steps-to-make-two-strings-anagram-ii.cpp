class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int> freq;
        int st=0;
        for(char c:s)
        {
            freq[c]++;
        }

        for(char c:t)
        {
            freq[c]--;
        }

        for(auto &p:freq)
        {
            st+=abs(p.second);
        }
        return st;
    }
};