class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int,string>> ppl;
        for(int i=0;i<names.size();i++)
        {
            ppl.push_back({heights[i],names[i]});
        }

        sort(ppl.begin(),ppl.end(),greater<>());

        vector<string> res;
        for(auto &p:ppl)
        {
            res.push_back(p.second);
        }

        return res;

    }
};