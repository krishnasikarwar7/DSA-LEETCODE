class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int x:nums)
        {
            freq[x]++;
        }
        int maxi=INT_MIN;
        for(auto &p:freq)
        {
            if(p.second>maxi)
            {
                maxi=p.second;
            }
        }
        vector<vector<int>> res(maxi);
        for(auto &p:freq)
        {
            int val=p.first;
            int count=p.second;
            for(int i=0;i<count;i++)
            {
                res[i].push_back(val);
            }
        }
        return res;
    }
};