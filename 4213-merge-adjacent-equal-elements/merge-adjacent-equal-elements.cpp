class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        vector<long long> s;

        for(long long x:nums)
        {
            while(!s.empty() && s.back()==x)
            {
                s.pop_back();
                x*=2;
            }
            s.push_back(x);
        }
        return s;
    }
};