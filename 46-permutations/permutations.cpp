class Solution {
public:
    void backtr(vector<int>& nums,vector<int>& newa, vector<vector<int>>& ans, vector<bool>& freq)
    {
        if(newa.size()==nums.size())
        {
            ans.push_back(newa);
            return;
        }

        for(int i=0;i<nums.size();i++)
        {
            if(!freq[i])
            {
                freq[i]=true;
                newa.push_back(nums[i]);
                backtr(nums,newa,ans,freq);
                newa.pop_back();
                freq[i]=false;
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> newa;
        vector<vector<int>> ans;
        vector<bool> freq(nums.size(),false);
        backtr(nums,newa,ans,freq);
        return ans;
    }
};