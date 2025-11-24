class Solution {
public:
    void subseq(int index,vector<int>&nums,vector<int>&newa,vector<vector<int>>& result)
    {
        if(index==nums.size())
        {
            result.push_back(newa);
            return;
        }
        newa.push_back(nums[index]);
        subseq(index+1,nums,newa,result);
        newa.pop_back();
        subseq(index+1,nums,newa,result);
    }


    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> newa;
        subseq(0,nums,newa,result);
        return result;
    }
};