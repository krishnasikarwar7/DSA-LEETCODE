class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        unordered_map<string, int> freq;
        int c = 0;

        for (auto &s : nums)
            freq[s]++;

        for (auto &s : nums) {
            if (target.find(s) == 0) 
            { 
                string rest = target.substr(s.size());
                c += freq[rest];
                if (rest == s)
                    c--;  
            }
        }

        return c;
    }
};