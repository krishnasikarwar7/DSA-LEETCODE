class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int mini=INT_MAX;
        for(int i=0;i<n-1;i++)
        {
            if(abs(arr[i]-arr[i+1])<mini)
                mini=abs(arr[i]-arr[i+1]);
        }
        vector<vector<int>> ans;

        for(int i=0;i<n-1;i++)
        {
            if(abs(arr[i]-arr[i+1])==mini)
            {
                ans.push_back({arr[i],arr[i+1]});
            }
        }
        return ans;

    }
};