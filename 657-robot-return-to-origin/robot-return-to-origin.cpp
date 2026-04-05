class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0;
        int y=0;
        for(auto c:moves)
        {
            if(c=='L') x++;
            else if(c=='R') x--;
            else if(c=='U') y++;
            else y--;
        }
        if(x==0 && y==0) return true;
        
        return false;
    }
};