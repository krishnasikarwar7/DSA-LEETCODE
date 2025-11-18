class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> freq=
        {
            {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}
        };

        int ans=0;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if((i+1)<n && freq[s[i]]<freq[s[i+1]])
            {
                ans-=freq[s[i]];
            }
            else
            {
                ans+=freq[s[i]];
            }
        }

        return ans;
    }
};