class Solution {
public:
    bool bfs(int src,vector<vector<int>>& graph, vector<int>& color)
    {
        queue<int> q;
        q.push(src);
        color[src]=0;

        while(!q.empty())
        {
            int node=q.front();
            q.pop();

            for(auto neighbor:graph[node])
            {
                if(color[neighbor]==-1)
                {
                    color[neighbor]=!color[node];
                    q.push(neighbor);
                }
                else if(color[node]==color[neighbor])
                {
                    return false;
                }
            }
        }
        return true;
    }

    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int> color(n,-1);
        for(int i=0;i<n;i++)
        {
            if(color[i]==-1)
            {
                if(bfs(i,graph,color)==false) return false;
            }
        }
        return true;
    }
};