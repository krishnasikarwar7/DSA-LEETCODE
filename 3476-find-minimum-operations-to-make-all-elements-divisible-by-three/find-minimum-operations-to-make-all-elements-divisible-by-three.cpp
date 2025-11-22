class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int c=0;
        for(int x:nums)
        {
            if(x%3!=0)
            {
                c+=min(x%3, 3-(x%3));
            }
        }
        return c;
    }
};