class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int low=0,up=n-1;
        int mid;

        while(low<up)
        {
            mid=(low+up)/2;
            if(arr[mid]<arr[mid+1])
            {
                low=mid+1;
            }
            else
            {
                up=mid;
            }
        }
        return up;
    }
};