class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> res;
        int mini=INT_MAX,maxi=INT_MIN;
        for(int x:nums)
        {
            if(x>maxi) maxi=x;
            if(x<mini) mini=x;
        }
        unordered_set<int> s(nums.begin(),nums.end());

        for(int i=mini;i<=maxi;i++)
        {
            if(!s.count(i))
                res.push_back(i);
        }
        return res;
    }
};