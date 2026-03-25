class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.length();
        if(t.length()>n) return "";

        unordered_map<char,int> freq;
        for(char c:t)
        {
            freq[c]++;
        }
        int reqCount=t.length();
        int i=0,j=0;

        int minWindowsize=INT_MAX;
        int start_i=0;

        while(j<n)
        {
            char ch=s[j];
            if(freq[ch]>0) reqCount--;
            freq[ch]--;

            while(reqCount==0)
            {
                int currWindowsize=j-i+1;
                if(currWindowsize<minWindowsize)
                {
                    minWindowsize=currWindowsize;
                    start_i=i;
                }
                freq[s[i]]++;
                if(freq[s[i]]>0) reqCount++;
                i++;
            }
            j++;
        }
        return minWindowsize==INT_MAX?"":s.substr(start_i,minWindowsize);
    }
};