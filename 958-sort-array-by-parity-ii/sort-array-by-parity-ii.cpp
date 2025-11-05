class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        int eveind=0,oddind=1;

        for(int num:nums)
        {
            if(num%2==0)
            {
                ans[eveind]=num;
                eveind+=2;
            }
            else
            {
                ans[oddind]=num;
                oddind+=2;
            }
        }

        return ans;
    }
};