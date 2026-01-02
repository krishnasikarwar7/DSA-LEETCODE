class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int x:nums)
        {
            freq[x]++;
        }
        int maxfreq=0;
        int maxele=0;
        for(auto &p:freq)
        {
            if(p.second>maxfreq)
            {
                maxfreq=p.second;
                maxele=p.first;
            }
        }
        return maxele;
    }
};