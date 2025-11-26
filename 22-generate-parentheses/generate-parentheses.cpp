class Solution {
public:
    void generate(int n,int open,int close,string curr,vector<string>&result)
    {
        if(curr.length()==2*n)
        {
            result.push_back(curr);
        }
        if(open<n)
        {
            generate(n,open+1,close,curr+'(',result);
        }
        if(close<open)
        {
            generate(n,open,close+1,curr+')',result);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        generate(n,0,0,"",result);
        return result;
    }
};