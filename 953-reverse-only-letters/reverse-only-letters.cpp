class Solution {
public:
    string reverseOnlyLetters(string s) {
        int i=0;
        int j=s.length()-1;

        while(i<=j)
        {
            if(!isalpha(static_cast<unsigned char> (s[i])))
            {
                i++;
            }
            else if(!isalpha(static_cast<unsigned char> (s[j])))
            {
                j--;
            }
            else
            {
                swap(s[i],s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};