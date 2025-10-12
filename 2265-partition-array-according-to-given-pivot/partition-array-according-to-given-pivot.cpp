class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> result;
        int ec=0;

        for(int num:nums)
        {
            if(num<pivot)
            {
                result.push_back(num);
            }
            if(num==pivot)
            {
                ec++;
            }
        }

        result.insert(result.end(),ec,pivot);

        for(int num:nums)
        {
            if(num>pivot)
            {
                result.push_back(num);
            }
        }

        return result;
    }
};