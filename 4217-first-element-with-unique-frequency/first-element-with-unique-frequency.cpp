class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int x:nums)
        {
            freq[x]++;
        }

        unordered_map<int,int> freqC;
        for(auto &p:freq)
        {
            freqC[p.second]++;
        }

        for(int x:nums)
        {
            if(freqC[freq[x]]==1)
            {
                return x;
            }
        }
        return -1;
    }
};