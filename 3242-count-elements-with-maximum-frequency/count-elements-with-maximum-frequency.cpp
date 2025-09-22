class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> map;
        int n=nums.size();
        
        for(int num:nums)
        {
            map[num]++;
        }

        int c=0;
        int max=0;
        
        for(auto &p:map)
        {
            if(p.second>max)
            {
                max=p.second;
                
            }
        }

        for(auto &p:map)
        {
            if(p.second==max)
            {
                c+=p.second;
            }
        }

        return c;
    }
};