class Solution {
public:
    string stringHash(string s, int k) {
        string result="";
        int size=s.length();
        int sum=0;

        for(int i=0;i<size;i+=k)
        {
            sum=0;
            for(int j=i;j<i+k && j<size;j++)
            {
                sum+=(s[j]-'a');
            }
            result+=char('a'+(sum%26));
        }

        return result;
    }
};