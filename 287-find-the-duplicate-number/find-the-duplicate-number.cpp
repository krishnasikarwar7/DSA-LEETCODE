class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int left=1,right=n-1;
        int ans=0;

        while(left<=right)
        {
            int mid=left+ (right-left)/2;

            int c=0;
            for(int val:nums)
            {
                if(val<=mid)
                    c++;
            }

            if(c>mid)
            {
                ans=mid;
                right=mid-1;
            }
            
            else 
            {
                left=mid+1;
            }

        }

        return ans;
    }
};