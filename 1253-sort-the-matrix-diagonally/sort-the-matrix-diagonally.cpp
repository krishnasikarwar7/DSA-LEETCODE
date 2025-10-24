class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        map<int,vector<int>> diag; 
        int m=mat.size(); 
        int n=mat[0].size(); 
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                diag[i-j].push_back(mat[i][j]);
            }
        }

        for(auto &d:diag)
        {
            sort(d.second.begin(),d.second.end());
        }

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                mat[i][j]=diag[i-j].front();
                diag[i-j].erase(diag[i-j].begin());
            }
        }

        return mat;
    }
};