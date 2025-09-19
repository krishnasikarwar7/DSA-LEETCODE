class Solution {
public:
    int minElement(vector<int>& nums) {
        int sum=0,digit;
        for(int i=0;i<nums.size();i++)
        {
            sum=0;
            while(nums[i]>0)
            {
                digit=nums[i]%10;
                sum+=digit;
                nums[i]/=10;
            }
            nums[i]=sum;
        }

        int min=*min_element(nums.begin(),nums.end());
  
        return min;
    }
};