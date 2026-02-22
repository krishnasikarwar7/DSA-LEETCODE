class Solution {
public:
    void backtr(int start, int k, int target, vector<int>& curr, vector<vector<int>>& ans)
    {
        if(curr.size()==k && target==0)
        {
            ans.push_back(curr);
            return;
        }

        if(target<0 || curr.size()>k)
            return;

        for(int i=start;i<=9;i++)
        {
            curr.push_back(i);
            backtr(i+1,k,target-i,curr,ans);
            curr.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> curr;
        vector<vector<int>> ans;
        backtr(1,k,n,curr,ans);
        return ans;

    }
};

