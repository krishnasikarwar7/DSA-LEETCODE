class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int n=nums.size();
        int c=0;
        int low=0,high=n-1;
        sort(nums.begin(),nums.end());

        while(low<=high)
        {
            if(nums[low]+nums[high]<target)
            {
                c+=(high-low);
                low++;
            }
            else
            {
                high--;
            }
        }

        return c;
    }
};