class Solution {
public:
    void combn(int index,int n,int k,vector<int>&curr,vector<vector<int>>&res)
    {
        if(index>n)
        {
            if(curr.size()==k)
            {
                res.push_back(curr);
            }
            return;
        }
        curr.push_back(index);
        combn(index+1,n,k,curr,res);
        curr.pop_back();
        combn(index+1,n,k,curr,res);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> curr;
        combn(1,n,k,curr,res);
        return res;
    }
};