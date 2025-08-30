class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            int dc=0;
            while(nums[i]>0)
            {
                dc++;
                nums[i]/=10;
            }
            if(dc%2==0) c++;
        }
        return c;
    }
};