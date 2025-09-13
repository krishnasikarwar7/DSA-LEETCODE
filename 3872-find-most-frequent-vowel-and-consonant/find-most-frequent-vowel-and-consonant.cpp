class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<int,int> map;
        int n=s.size();
        int mv=0,mc=0;

        for(int i=0;i<n;i++)
        {
            map[s[i]]++;
        }

        for(auto &p:map)
        {
            if(p.first=='a'|| p.first=='e'||p.first=='i'||p.first=='o'||p.first=='u')
            {
                if(p.second>mv)
                {
                    mv=p.second;
                }
            }
            else
            {
                if(p.second>mc)
                {
                    mc=p.second;
                }
            }
        }

        return mv+mc;
    }
};