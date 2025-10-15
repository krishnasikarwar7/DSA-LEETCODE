class Solution {
public:
    string findCommonResponse(vector<vector<string>>& responses) {
        unordered_map<string,int> freq;

        int n=responses.size();

        for(int i=0;i<n;i++)
        {
            unordered_set<string> visited(responses[i].begin(),responses[i].end());
            for(auto &s:visited)
            {
                freq[s]++;
            }
        }

        int maxC=0;
        string maxS="";

        for(auto &p:freq)
        {
            if(p.second>maxC || (p.second == maxC && p.first < maxS))
            {
                maxC=p.second;
                maxS=p.first;
            }
        }

        return maxS;
    }
};