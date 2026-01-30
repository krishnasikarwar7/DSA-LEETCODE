class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        vector<int> res(k,0);
        unordered_map<int,unordered_set<int>> mp;
        for(auto &x:logs)
        {
            mp[x[0]].insert(x[1]);
        }

        for(auto &p:mp)
        {
            int min=p.second.size();
            res[min-1]++;
        }
        return res;
    }
};