class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1;

        int maxp=0;
        while(i<j)
        {
            maxp=max(maxp,nums[i]+nums[j]);
            i++;
            j--;
        }

        return maxp;
    }
};