class Solution {
public:
    bool canEatall(vector<int>& piles,int mid,int h)
    {
        int actualhrs=0;
        for(int x:piles)
        {
            actualhrs+=x/mid;
            if(x%mid!=0)
            {
                actualhrs++;
            }
        }
        
        return actualhrs<=h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int l=1,r=*max_element(piles.begin(),piles.end());

        while(l<r)
        {
            int mid=l+(r-l)/2;
            if(canEatall(piles,mid,h))
            {
                r=mid;
            }
            else
            {
                l=mid+1;
            }
        }
        return l;
    }
};