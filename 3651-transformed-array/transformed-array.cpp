class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> res(n,0);
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
                res[i]=nums[i];
            else
            {
                int j=i;
                j+=nums[i];
                j=((j%n)+n)%n; 
                res[i]=nums[j];
            }
        }
        return res;
    }
};