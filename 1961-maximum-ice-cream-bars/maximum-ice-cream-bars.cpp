class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        long long c=0,sum=0;

        for(int i=0;i<costs.size();i++)
        {
            sum+=costs[i];
            if(sum<=coins)
            {
                c++;
            }
        }

        return c;
    }
};