class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0,up=n-1;
        int mid=(low+up)/2;
        while(low<=up)
        {
            mid=(low+up)/2;
            if(target>nums[mid])
            {
                low=mid+1;
            }
            else if(target<nums[mid])
            {
                up=mid-1;
            }
            else
            { 
                return mid;
            }
        }
        return -1;
    }
};