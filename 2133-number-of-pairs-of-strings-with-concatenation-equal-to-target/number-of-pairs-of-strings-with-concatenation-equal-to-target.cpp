class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int n=nums.size();
        int c=0;

        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    c++;
                }
                if(nums[j]+nums[i]==target)
                {
                    c++;
                }
            }
        }

        return c;
    }
};