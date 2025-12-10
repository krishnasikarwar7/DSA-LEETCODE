class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char,int> freq;
        int cnt=0;
        for(char c:allowed)
        {
            freq[c]++;
        }

        for(auto &st:words)
        {
            bool flag=1;
            for(int i=0;i<st.length();i++)
            {
                if(freq.find(st[i])==freq.end())
                {
                    flag=0;
                    break;
                }
            }
            if(flag) cnt++;
        }
        return cnt;
    }
};