class Solution {
public:
    int addDigits(int num) {
        int sum=0;
        int d=0;
        while(num>=10)
        {
            sum=0;
            while(num>0)
            {
                d=num%10;
                sum+=d;
                num/=10;
            }
            num=sum;
        }
        return num;
    }
};