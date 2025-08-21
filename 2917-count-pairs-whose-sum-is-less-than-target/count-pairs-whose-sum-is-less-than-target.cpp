class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(nums[i]+nums[j]<target)
                {
                    vector<int> temp;
                    temp.push_back(i);
                    temp.push_back(j);
                    ans.push_back(temp);
                }
            }
        }
        int k=ans.size();
        return k;
    }
};