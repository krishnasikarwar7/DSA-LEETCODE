class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        if(n<2) return 0;

        int maxD=0;
        for(int i=1;i<n;i++)
        { 
            if(nums[i]-nums[i-1]>maxD)
            {
                maxD=nums[i]-nums[i-1];
            }
        }

        return maxD;
    }
};