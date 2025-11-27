class Solution {
public:
    void subset(int index,vector<int>&nums,vector<int>&curr,vector<vector<int>>&result)
    {
        if(index==nums.size())
        {
            result.push_back(curr);
            return;
        }
        curr.push_back(nums[index]);
        subset(index+1,nums,curr,result);
        curr.pop_back();
        subset(index+1,nums,curr,result);
    }
    int subsetXORSum(vector<int>& nums) {
        vector<int> curr;
        vector<vector<int>> result;
        subset(0,nums,curr,result);

        int xorr=0;
        int sum=0;
        for(auto v:result)
        {
            xorr=0;
            for(auto e:v)
            {
                xorr=xorr^e;
            }
            sum+=xorr;
        }
        return sum;
    }
};