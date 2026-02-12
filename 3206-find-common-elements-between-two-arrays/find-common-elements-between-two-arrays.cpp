class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int ans1=0,ans2=0;
        unordered_set<int> s1(nums1.begin(),nums1.end());
        unordered_set<int> s2(nums2.begin(),nums2.end());

        for(int x:nums1)
        {
            if(s2.count(x))
                ans1++;
        }
        for(int x:nums2)
        {
            if(s1.count(x))
                ans2++;
        }
        return {ans1,ans2};

    }
};