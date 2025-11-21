class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int c=0;
        if(k<0) return 0;
        unordered_map<int,int> freq;
        for(int x:nums)
        {
            freq[x]++;
        }

        if(k==0)
        {
            for(auto &p:freq)
            {
                if(p.second>1)
                    c++;
            }
        }
        else
        {
            for(auto &p:freq)
            {
                if(freq.count(p.first+k))
                    c++;
            }
        }

        return c;
    }
};