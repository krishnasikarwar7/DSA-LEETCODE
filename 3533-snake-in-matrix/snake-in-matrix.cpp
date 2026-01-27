class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int row=0,col=0;
        int ans=0;
        for(string s:commands)
        {
            if(s=="UP")
                row--;
            else if(s=="DOWN")
                row++;
            else if(s=="RIGHT")
                col++;
            else 
                col--;
        }

        ans=row*n + col;
        return ans;
    }
};