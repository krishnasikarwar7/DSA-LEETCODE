class Solution {
public:
    int minMirrorPairDistance(vector<int>& nums) {
        unordered_map<int,vector<int>> freq;
        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]].push_back(i);
        }

        int ans=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            int x=nums[i];
            int rev=0;
            while(x>0)
            {
                int digit=x%10;
                rev=(rev*10)+digit;
                x/=10;
            }
            if(freq.find(rev)==freq.end())
                continue;
            
            auto &vec = freq[rev];

            auto it = upper_bound(vec.begin(),vec.end(),i);
            if(it == vec.end()) 
                continue;

            int j = *it;
            ans=min(ans,j-i);
        }

        return ans==INT_MAX?-1:ans;
    }
};