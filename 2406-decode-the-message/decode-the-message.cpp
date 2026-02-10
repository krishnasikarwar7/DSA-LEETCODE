class Solution {
public:
    string decodeMessage(string key, string message) {
        vector<char> mp(26);
        char curr='a';
        for(char c:key)
        {
            if(c!=' ' && mp[c-'a']==0)
            {
                mp[c-'a']=curr++;
            }
        }
        for(char &c:message)
        {
            if(c!=' ')
            {
                c=mp[c-'a'];
            }
        }

        return message;

    }
};