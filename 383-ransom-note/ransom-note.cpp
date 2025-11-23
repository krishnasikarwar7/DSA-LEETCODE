class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> magfreq;
        for(char c:magazine)
        {
            magfreq[c]++;
        }

        for(char x:ransomNote)
        {
            magfreq[x]--;
        }

        for(auto &p:magfreq)
        {
            if(p.second<0)
                return false;
        }
        return true;
    }
};