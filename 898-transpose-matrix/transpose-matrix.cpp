class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int row=matrix[0].size();
        int col=matrix.size();
        vector<vector<int>> res(row,vector<int>(col));
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                res[i][j]=matrix[j][i];
            }
        }
        return res;
    }
};