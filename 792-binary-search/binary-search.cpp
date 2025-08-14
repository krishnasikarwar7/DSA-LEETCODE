class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0,up=n-1;
        int mid=(low+up)/2;
        int ans;
        for(int i=0;i<n;i++)
        {
            if(target>nums[mid])
            {
                low=mid+1;
                mid=(low+up)/2;
            }
            else if(target<nums[mid])
            {
                up=mid-1;
                mid=(low+up)/2;
            }
            else
            { 
                ans=mid;
                return ans;
            }
        }
        return -1;
    }
};