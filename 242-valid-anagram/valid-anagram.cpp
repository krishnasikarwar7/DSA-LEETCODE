class Solution {
public:
    bool isAnagram(string s, string t) {
       int sl=s.length(),tl=t.length();
       if(sl!=tl) return false;
       sort(s.begin(),s.end());
       sort(t.begin(),t.end());
       for(int i=0;i<sl;i++)
       {
            if(s[i]!=t[i])
            {
                return false;
            }
       }
       return true;
    }
};