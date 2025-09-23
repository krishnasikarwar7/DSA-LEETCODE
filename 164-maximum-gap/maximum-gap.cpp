class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        if(n<2) return 0;

        int maxD=0;
        int diff=0;
        for(int i=1;i<n;i++)
        {  
            diff=nums[i]-nums[i-1];
            if(diff>maxD)
            {
                maxD=diff;
            }
        }

        return maxD;
    }
};