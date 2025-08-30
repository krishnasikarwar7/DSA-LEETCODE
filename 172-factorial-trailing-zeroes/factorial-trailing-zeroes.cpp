class Solution {
public:
    int trailingZeroes(int n) {
        long long fact=1;
        int c=0;
        for(int i=1;i<=n;i++)
        {
            fact*=i;

            while(fact%10==0)
            {
                c++;
                fact/=10;
            }

            fact%=100000;
        }


        return c;
    }
};