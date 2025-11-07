class Solution {
public:
    int minSteps(string s, string t) {
        int st=0;
        unordered_map<char,int> freq;

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
            if(p.second>0)
                st+=p.second;
        }

        return st;
    }
};