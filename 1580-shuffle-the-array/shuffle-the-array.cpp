class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        n=nums.size();
        vector<int> arr1;
        vector<int> arr2;

        vector<int> ans;

        for(int i=0;i<(n/2);i++)
        {
            arr1.push_back(nums[i]);
        }
        for(int i=(n/2);i<n;i++)
        {
            arr2.push_back(nums[i]);
        }

        for(int i=0;i<(n/2);i++)
        {
            ans.push_back(arr1[i]);
            ans.push_back(arr2[i]);
        }

        return ans;
    }
};