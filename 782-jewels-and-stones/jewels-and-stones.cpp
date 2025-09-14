class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int m=jewels.size();
        int n=stones.size();
        int c=0;
        unordered_map<int,int> map1;
        unordered_map<int,int> map2;

        for(int i=0;i<m;i++)
        {
            map1[jewels[i]]++;
        }

        for(int i=0;i<n;i++)
        {
            map2[stones[i]]++;
        }

        for(int i=0;i<m;i++)
        {
            for(auto &p:map2)
            {
                if(jewels[i]==p.first)
                {
                    c+=p.second;
                }
            }
        }
        return c;
    }
};