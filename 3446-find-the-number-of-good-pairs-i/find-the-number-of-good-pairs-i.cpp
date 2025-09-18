class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        unordered_map<int,int> map;
        int c=0;
        for(int num:nums2)
        {
            map[num*k]++;
        }

        for(int num:nums1)
        {
            for(auto &p:map)
            {
                if(num % p.first==0)
                {
                    c+=p.second;
                }
            }
        }

        return c;
    }
};