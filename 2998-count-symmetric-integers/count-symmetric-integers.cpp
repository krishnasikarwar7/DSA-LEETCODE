class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int c=0;
        for(int i=low;i<=high;i++)
        {
            string s=to_string(i);
            int n=s.size();

            if(n%2!=0) continue;
            int s1=0,s2=0;

            for(int j=0;j<n/2;j++)
            {
                s1+=s[j]-'0';
                s2+=s[j+n/2]-'0';
            }

            if(s1==s2) c++;
        }
        return c;
    }
};