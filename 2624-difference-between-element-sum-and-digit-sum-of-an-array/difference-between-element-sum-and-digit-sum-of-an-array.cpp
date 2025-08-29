class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int dsum=0,esum=0;
        int d=0,n=0;
        for(int i=0;i<nums.size();i++)
        {
            esum+=nums[i];
            n=nums[i];
            while(n>0)
            {
                d=n%10;
                dsum+=d;
                n/=10;
            }
        }
        return abs(esum-dsum);
    }
};