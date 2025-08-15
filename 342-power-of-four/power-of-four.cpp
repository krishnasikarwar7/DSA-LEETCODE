class Solution {
public:
    bool isPowerOfFour(int n) {
        int x=0;
        if(n==0) return false;
        while(pow(4,x)<=n)
        {
            if(n==pow(4,x))
            {
                return true;
            }
            x++;
        }
        return false;
    }
};