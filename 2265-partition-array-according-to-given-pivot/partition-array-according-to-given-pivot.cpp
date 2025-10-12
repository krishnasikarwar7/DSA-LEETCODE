class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> prev,equal,after;
        
        for(int num:nums)
        {
            if(num<pivot)
            {
                prev.push_back(num);
            }
            if(num==pivot)
            {
                equal.push_back(num);
            }
            if(num>pivot)
            {
                after.push_back(num);
            }
        }

        vector<int> result;

        result.insert(result.end(),prev.begin(),prev.end());
        result.insert(result.end(),equal.begin(),equal.end());
        result.insert(result.end(),after.begin(),after.end());

        return result;
    }
};