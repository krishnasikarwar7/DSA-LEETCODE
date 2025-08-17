class Solution {
public:
    int pivotInteger(int n) {
    int sumleft=0,sumright=0;
    for(int i=0;i<=n;i++)
    {
        sumleft=0,sumright=0;
        for(int j=0;j<=i;j++)
        {
            sumleft+=j;
        }
        for(int k=i;k<=n;k++)
        {
            sumright+=k;
        }
        if(sumleft==sumright)
        {
            return i;
        }
    }
    return -1;
    }
};