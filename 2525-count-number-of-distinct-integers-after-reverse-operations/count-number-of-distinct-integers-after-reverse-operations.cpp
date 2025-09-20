class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int rev=0,digit=0,orig;
        unordered_set<int> set(nums.begin(),nums.end());
        for(int num:nums)
        {
            rev=0;
            orig=num;
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