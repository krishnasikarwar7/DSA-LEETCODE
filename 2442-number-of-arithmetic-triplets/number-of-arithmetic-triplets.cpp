class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {

        int c=0;
        unordered_set<int> m(nums.begin(),nums.end());

        for(int x:nums)
        {
            if(m.count(x+diff) && m.count(x+ 2*diff))
            {
                c++;
            }
        }
       
        return c;
    }
};