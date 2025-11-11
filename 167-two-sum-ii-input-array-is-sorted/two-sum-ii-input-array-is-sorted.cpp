class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int left=0;
        int right=n-1;

        while(left<right)
        {
            int mid=numbers[left]+numbers[right];

            if(mid==target)
            {
                return {left+1,right+1};
            }
            else if(mid<target)
            {
                left++;
            }
            else
            {
                right--;
            }
        }

        return {};
        
    }
};