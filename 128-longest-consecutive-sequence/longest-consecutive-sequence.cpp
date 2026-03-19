class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        int l=0;
        for(int num:s)
        {
            if(s.find(num-1)==s.end())
            {
                int cnt=1;
                while(s.find(num+1)!=s.end())
                {
                    num++;
                    cnt++;
                }
                l=max(l,cnt);
            }
        }
        return l;
    }
};