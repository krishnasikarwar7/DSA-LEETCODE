class Solution {
public:
    int maxDepth(string s) {
        int d=0;
        int maxd=0;

        for(char c:s)
        {
            if(c=='(') 
            {
                d++;
                maxd=max(maxd,d);
            }
            if(c==')')
            {
                d--;
            }
        }

        return maxd;
    }
};