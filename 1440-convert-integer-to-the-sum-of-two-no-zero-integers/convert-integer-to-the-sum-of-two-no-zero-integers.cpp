class Solution {
public:
    bool isNoZero(int x)
    {
        int d=0;
        while(x>0)
        {
            d=x%10;
            if(d==0) return false;
            x/=10;
        }
        return true;
    }



    vector<int> getNoZeroIntegers(int n) {
        vector<int> ans;
        int a=0,b=0;

        for(int i=1;i<n;i++)
        {
            a=i;
            b=n-i;
            if(a+b==n && isNoZero(a) && isNoZero(b))
            {
                ans.push_back(a);
                ans.push_back(b);
                break;
            }
        }
        return ans;
    }
};