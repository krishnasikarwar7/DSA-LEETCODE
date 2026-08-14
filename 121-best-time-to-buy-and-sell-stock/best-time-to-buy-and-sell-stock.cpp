class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxP=INT_MIN,minPrice=INT_MAX;
        for(int x:prices)
        {
            minPrice=min(minPrice,x);
            maxP=max(maxP,x-minPrice);
        }
        return maxP;

    }
};