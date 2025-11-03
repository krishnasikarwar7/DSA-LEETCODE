class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> result;
        int n=nums.size()/2;
        vector<int> pos;
        vector<int> neg;

        for(int val:nums)
        {
            if(val>0)
                pos.push_back(val);
            else
                neg.push_back(val);
        }

        for(int i=0;i<n;i++)
        {
            result.push_back(pos[i]);
            result.push_back(neg[i]);
        }

        return result;

    }
};