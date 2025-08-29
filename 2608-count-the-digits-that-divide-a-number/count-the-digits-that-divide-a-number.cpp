class Solution {
public:
    int countDigits(int num) {
        int c=0;
        int d=0,orig=num;
        while(num>0)
        {
            d=num%10;
            if(orig%d==0)
            {
                c++;
            }
            num/=10;
        }
        return c;
    }
};