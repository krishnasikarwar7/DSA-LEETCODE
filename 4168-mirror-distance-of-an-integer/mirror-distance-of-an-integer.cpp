class Solution {
public:
    int mirrorDistance(int n) {
        int orig=n;
        int rev=0;
        while(orig>0)
        {
            int digit=orig%10;
            rev=rev*10+digit;
            orig/=10;
        }
        return abs(n-rev);
    }
};