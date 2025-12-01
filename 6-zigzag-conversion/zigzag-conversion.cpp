class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> str(numRows);
        int currRow=0;
        int dirn=1;
        string res;
        if(numRows==1 || s.size()<=numRows)
            return s;

        for(char c:s)
        {
            str[currRow]+=c;

            if(currRow==0)
                dirn=1;
            else if(currRow==numRows-1)
                dirn=-1;
            
            currRow+=dirn;
        }
        for(auto &st:str)
        {
            res+=st;
        }
        return res;
    }
};