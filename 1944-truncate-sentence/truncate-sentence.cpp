class Solution {
public:
    string truncateSentence(string s, int k) {
        stringstream ss(s);
        vector<string> res;
        string word;
        while(ss>>word)
        {
            res.push_back(word);
        }

        string r="";
        for(int i=0;i<k;i++)
        {
            if(i>0) r+=" ";
            r+=res[i];
        }
        return r;
    }
};