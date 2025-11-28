class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int lefts=0,rights=0;
        int n=nums.size();
        vector<int> ls(n);
        vector<int> rs(n);
        for(int i=0;i<n;i++)
        {
            ls[i]=lefts;
            lefts+=nums[i];
        }
        for(int i=n-1;i>=0;i--)
        {
            rs[i]=rights;
            rights+=nums[i];
        }
        vector<int> res;
        for(int i=0;i<n;i++)
        {
            res.push_back(abs(ls[i]-rs[i]));
        }
        return res;
    }
};