class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        double answer=0;
        int x=0;
        for(int i=0;i<nums1.size();i++)
        {
            ans.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++)
        {
            ans.push_back(nums2[i]);
        }

        for(int i=0;i<ans.size()-1;i++)
        {
            for(int j=0;j<ans.size()-i-1;j++)
            {
                if(ans[j]>ans[j+1])
                {
                    swap(ans[j],ans[j+1]);
                }
            }
        }
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