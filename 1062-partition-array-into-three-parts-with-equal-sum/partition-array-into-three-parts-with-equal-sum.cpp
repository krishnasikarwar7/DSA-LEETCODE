class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int total=accumulate(arr.begin(),arr.end(),0);
        if(total%3!=0) return false;
        int target=total/3;
        int parts=0;
        int currsum=0;
        for(int i=0;i<arr.size();i++)
        {
            currsum+=arr[i];
            if(currsum==target)
            {
                parts++;
                currsum=0;
                if(parts==3) return true;;
            }
        }
        return false;
    }
};