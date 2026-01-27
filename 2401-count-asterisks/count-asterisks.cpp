class Solution {
public:
    int countAsterisks(string s) {
       int cnt=0;
       int bar=0;
       for(char c:s)
       {
            if(c=='|')
            {
                bar++;
            }

            else if(c=='*' && bar%2==0)
            {
                cnt++;
            }
       } 
       return cnt;
    }
};