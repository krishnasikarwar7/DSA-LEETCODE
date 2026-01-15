class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int ssum=0;
        int dsum=0;
        for(int num:nums)
        {
            if(num>=0 && num<=9)
            {
                ssum+=num;
            }
            else
                dsum+=num;
        }

        if(ssum==dsum) return false;

        return true;

    }
};