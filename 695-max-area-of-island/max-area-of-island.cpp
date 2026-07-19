class Solution {
public:
    int dfs(int r,int c,vector<vector<int>>& grid, vector<vector<int>>& vis)
    {
        int n=grid.size();
        int m=grid[0].size();
        
        if(r<0 || c<0 || r>=n || c>=m || grid[r][c]==0 || vis[r][c]) return 0;

        vis[r][c]=1;

        return 1+ dfs(r+1,c,grid,vis)+dfs(r,c+1,grid,vis)+dfs(r-1,c,grid,vis)+dfs(r,c-1,grid,vis);
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1 && !vis[i][j])
                {
                    ans=max(ans,dfs(i,j,grid,vis));
                }
            }
        }
        return ans;
    }
};