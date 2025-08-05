class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int c=0;
        int i=0;
        for(int i=0;i<nums.size();i++)
        {
            c=count(nums.begin(), nums.end(), nums[i]);
            if(c==1) return nums[i];
            c=0;
        }
        return nums[i];
    }
};