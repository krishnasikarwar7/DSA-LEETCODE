class Solution {
public:
    void dfs(int r, int c, vector<vector<char>>& grid, vector<vector<int>>& vis)
    {
        vis[r][c]=1;
        int dr[]={-1,1,0,0};
        int dc[]={0,0,-1,1};

        for(int i=0;i<4;i++)
        {
            int nr=r+dr[i];
            int nc=c+dc[i];
            if(nr>=0 && nc>=0 && nr<grid.size() && nc<grid[0].size() && grid[nr][nc]=='1' && !vis[nr][nc])
            {
                dfs(nr,nc,grid,vis);
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size(),m=grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        int c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='1' && !vis[i][j])
                {
                    c++;
                    dfs(i,j,grid,vis);
                }
            }
        }
        return c;
    }
};