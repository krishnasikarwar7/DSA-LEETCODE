class Solution {
public:
    int countTriples(int n) {
        int c=0;
        for(int x=1;x<=n;x++)
        {
            for(int y=1;y<=n;y++)
            {
                for(int z=1;z<=n;z++)
                {
                    if(x*x+y*y==z*z)
                        c++;
                }
            }
        }
        return c;
    }
};