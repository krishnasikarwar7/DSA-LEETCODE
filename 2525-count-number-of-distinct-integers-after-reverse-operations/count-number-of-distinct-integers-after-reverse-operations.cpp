class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int rev=0,digit=0,orig;
        unordered_set<int> set(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            rev=0;
            orig=nums[i];
            while(orig>0)
            {
                digit=orig%10;
                rev=rev*10+digit;
                orig/=10;
            }
            set.insert(rev);
        }
        
        return set.size();
    }
};