class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        int c=0;
        int lsum=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            lsum+=nums[i];
            int rsum=sum-lsum;
            if((lsum-rsum)%2==0)
                c++;
        }
        return c;
    }
};