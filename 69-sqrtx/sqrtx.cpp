class Solution {
public:
    int mySqrt(int x) {
        int low=0,high=x;
        long mid;
        int ans=-1;

        if(x<2) return x;
        while(low<=high)
        {
            mid=(low+high)/2;
            if((mid*mid)==x)
            {
                return mid;
            }
            else if((mid*mid)<x)
            {
                ans=mid;
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        return ans;
    }
};