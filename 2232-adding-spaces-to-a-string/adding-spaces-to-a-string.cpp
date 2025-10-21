class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string result="";

        int sl=s.length();
        int n=spaces.size();
        int j=0;

        for(int i=0;i<sl;i++)
        {
            if(j<n && i==spaces[j])
            {
                result+=" ";
                j++;
            }
            result+=s[i];
        }

        return result;
    }
};