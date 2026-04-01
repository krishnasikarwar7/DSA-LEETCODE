class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n=position.size();
        vector<pair<int,int>> cars;
        for(int i=0;i<n;i++)
        {
            cars.push_back({position[i],speed[i]});
        }
        sort(cars.begin(),cars.end());
        
        stack<double> st;
        for(int i=n-1;i>=0;i--)
        {
            int p=cars[i].first;
            int s=cars[i].second;
            double time=(double) (target-p)/s;
            if(!st.empty() && time<=st.top())
            {
                continue;
            }
            st.push(time);
        }
        return st.size();

    }
};