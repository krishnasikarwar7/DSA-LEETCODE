class Solution {
public:
    int triangularSum(vector<int>& nums) {

        while(nums.size()>1)
        {
            vector<int> temp;
            for(int i=1;i<nums.size();i++)
            {
                temp.push_back((nums[i-1]+nums[i])%10);
            }
            nums=temp;
        }

        return nums[0];
    }
};