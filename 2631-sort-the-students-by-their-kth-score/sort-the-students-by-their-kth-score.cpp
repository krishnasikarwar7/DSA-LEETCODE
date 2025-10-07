class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        
        vector<vector<int>> ans;

        sort(score.begin(),score.end(),[k](auto &a, auto &b)
        {
            return a[k]>b[k];
        });

        for(auto &v:score)
        {
            ans.push_back(v);
        }

        return ans;
    }
};