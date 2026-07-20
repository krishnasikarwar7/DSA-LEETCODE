class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m=grid.size(),n=grid[0].size();
        int total=m*n;
        vector<vector<int>> arr(m,vector<int>(n));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                int index=i*n +j;
                int nxt=(index+k)%total;
                arr[nxt/n][nxt%n]=grid[i][j];
            }
        }
        return arr;
    }
};