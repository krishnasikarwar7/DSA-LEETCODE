class Solution {
public:
    vector<string> map={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

    void backtr(int index,string& digits,string& curr, vector<string>& ans)
    {
        if(index==digits.length())
        {
            ans.push_back(curr);
            return;
        }

        string letters=map[digits[index]-'0'];

        for(char ch:letters)
        {
            curr.push_back(ch);
            backtr(index+1,digits,curr,ans);
            curr.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        string curr="";
        backtr(0,digits,curr,ans);
        return ans;
    }
};