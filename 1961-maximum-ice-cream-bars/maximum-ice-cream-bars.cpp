class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        long long sum=0;
        int c=0;

        for(int cost:costs)
        {
            if(sum+cost>coins)
            {
                break;
            }
            sum+=cost;
            c++;
        }

        return c;
    }
};