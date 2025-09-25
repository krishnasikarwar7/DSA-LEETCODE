class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        vector<vector<string>> ans;

        for(auto s:strs)
        {
            string k=s;
            sort(k.begin(),k.end());
            map[k].push_back(s);
        }

        for(auto &p:map)
        {
            ans.push_back(p.second);
        }

        return ans;

    }
};