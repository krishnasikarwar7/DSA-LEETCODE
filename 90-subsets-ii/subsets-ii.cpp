class Solution {
public:
    bool ifexists(vector<vector<int>>&result, vector<int>newa)
    {
        for(auto i:result)
        {
            if(i==newa)
                return true;
        }
        return false;
    }
    void subseq(int index,vector<int>&nums,vector<int>&newa,vector<vector<int>>&result)
    {
        sort(nums.begin(),nums.end());
        if(index==nums.size())
        {
            if(!ifexists(result,newa))
            {
                result.push_back(newa);
            }
            return;
        }
        newa.push_back(nums[index]);
        subseq(index+1,nums,newa,result);
        newa.pop_back();
        subseq(index+1,nums,newa,result);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> newa;
        subseq(0,nums,newa,result);
        return result;
    }
};