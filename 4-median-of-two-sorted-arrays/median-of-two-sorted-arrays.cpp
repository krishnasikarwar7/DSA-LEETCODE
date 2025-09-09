class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        double answer=0;
        int x=0;
        ans.insert(ans.end(), nums1.begin(), nums1.end());
        ans.insert(ans.end(), nums2.begin(), nums2.end());

        sort(ans.begin(),ans.end());
        x=ans.size();
        if(x%2!=0)
        {
            answer= ans[x/2];
        } 
        else 
        {   
            answer=((float)ans[(x/2)-1]+ans[x/2])/2;
        }
        return answer;
    }
};