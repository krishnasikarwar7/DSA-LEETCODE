class Solution {
public:
    void backtr(vector<int>& nums, vector<int>& curr, vector<vector<int>>& ans,vector<bool>& freq )
    {
        if(curr.size()==nums.size())
        {
            ans.push_back(curr);
        }
        for(int i=0;i<nums.size();i++)
        {
            if(!freq[i])
            {
                if(i > 0 && nums[i] == nums[i-1] && !freq[i-1])
                    continue;
                freq[i]=true;
                curr.push_back(nums[i]);
                backtr(nums,curr,ans,freq);
                curr.pop_back();
                freq[i]=false;
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> curr;
        vector<vector<int>> ans;
        vector<bool> freq(nums.size());
        backtr(nums,curr,ans,freq);
        return ans;
    }
};