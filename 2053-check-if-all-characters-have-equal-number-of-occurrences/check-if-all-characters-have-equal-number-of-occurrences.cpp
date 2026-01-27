class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> freq;

        for(char c:s)
        {
            freq[c]++;
        }

       int first=freq.begin()->second;
       bool flag=true;
       for(auto &p:freq)
       {
            if(p.second!=first)
            {
                flag=false;
            }
       }
       return flag;
    }
};