class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>> > pq;


        for(auto& p:points)
        {
            int x=p[0];
            int y=p[1];
            int dist=x*x + y*y;

            pq.push({dist,{x,y}});
        }

        vector<vector<int>> res;

        for(int i=0;i<k;i++)
        {
            auto t=pq.top();
            pq.pop();

            int x=t.second.first;
            int y=t.second.second;

            res.push_back({x,y});
        }

        return res;
    }
};