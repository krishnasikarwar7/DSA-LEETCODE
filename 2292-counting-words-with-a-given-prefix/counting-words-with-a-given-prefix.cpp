class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int c=0;
        for(string s:words)
        {
            if(pref==s.substr(0,pref.size()))
            {
                c++;
            }
        }

        return c;
    }
};