class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int mins=1,maxs=*max_element(piles.begin(),piles.end());
        
        while(mins<maxs)
        {
            int k=mins+(maxs-mins)/2;
            long long hoursneed=0;

            for(int pile:piles)
            {
                hoursneed+=ceil((double)pile/k);
            }

            if(hoursneed>h)
            {
                mins=k+1;
            }
            else
            {
                maxs=k;
            }
        
        }
        return mins;
    }
};