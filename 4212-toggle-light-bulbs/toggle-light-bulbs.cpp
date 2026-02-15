class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        unordered_map<int,int> freq;
        for(int x:bulbs)
        {
            freq[x]++;
        }

        vector<int> ans;
        for(auto &p:freq)
        {
            if(p.second%2!=0)
            {
                ans.push_back(p.first);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};