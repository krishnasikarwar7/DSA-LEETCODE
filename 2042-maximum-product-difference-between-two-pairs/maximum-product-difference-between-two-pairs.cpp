class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans=0;
        int highProd=nums[n-1]*nums[n-2];
        int lowProd=nums[0]*nums[1];
        ans=highProd-lowProd;
        return ans;
    }
};