class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    int n=nums.size();
    int low=0,up=n-1;
    int mid;

    int first=-1,last=-1;

    //leftmost occurrence
    while(low<=up)
    {
        mid=(low+up)/2;
        if(nums[mid]==target)
        {
            first=mid;
            up=mid-1;
        }
        else if(nums[mid]<target)
        {
            low=mid+1;
        }
        else
        {
            up=mid-1;
        }
    }

    //rightmost occurrence
    low=0,up=n-1;
    while(low<=up)
    {
        mid=(low+up)/2;
        if(nums[mid]==target)
        {
            last=mid;
            low=mid+1;
        }
        else if(nums[mid]>target)
        {
            up=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
        
        return {first,last};
    }
};