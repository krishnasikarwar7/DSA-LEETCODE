class Solution {
public:
    long long sumAndMultiply(int n) {
        string s=to_string(n);
        string x;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!='0')
            {
                x.push_back(s[i]);
            }
        }

        if(x.empty())
            return 0;
        
        long long sum=0;
        long long orig=stoll(x);
        long long temp=orig;
        while(temp>0)
        {
            int digit=temp%10;
            sum+=digit;
            temp/=10;
        }

        return orig*sum;

    }
};