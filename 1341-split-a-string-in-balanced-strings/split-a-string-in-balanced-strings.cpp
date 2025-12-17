class Solution {
public:
    int balancedStringSplit(string s) {
        int cnt=0;
        int bal=0;
        for(char c:s)
        {
            if(c=='R')
                bal+=1;
            if(c=='L')
                bal-=1;
            if(bal==0)
                cnt++;
        }

        return cnt;
    }
};