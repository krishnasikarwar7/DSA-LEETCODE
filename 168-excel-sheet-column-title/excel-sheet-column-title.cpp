class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result;
        int rem;

        while(columnNumber>0)
        {
            columnNumber--;
            rem=columnNumber%26;
            result.push_back('A'+rem);
            columnNumber/=26;
        }

        reverse(result.begin(),result.end());
        return result;
    }
};