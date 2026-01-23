class Solution {
public:
    string reversePrefix(string word, char ch) {
        string res;
        int idx=0;
        for(int i=0;i<word.size();i++)
        {
            if(word[i]==ch)
            {
                idx=i;
                break;
            }
        }

        string part;
        for(int i=0;i<=idx;i++)
        {
            part.push_back(word[i]);
        }
        reverse(part.begin(),part.end());

        res+=part;

        for(int i=idx+1;i<word.size();i++)
        {
            res+=word[i];
        }

        return res;
    }
};