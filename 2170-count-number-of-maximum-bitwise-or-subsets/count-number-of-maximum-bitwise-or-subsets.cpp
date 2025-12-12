class Solution {
public:
    int max_or=0;
    int cnt=0;
    void subset(int index, vector<int>& nums,int curr_or)
    {
        if(index==nums.size())
        {
            if(curr_or>max_or)
            {
                max_or=curr_or;
                cnt++;
            }
            else if(curr_or==max_or)
            {
                cnt++;
            }
            return;
        }
        subset(index+1,nums,curr_or|nums[index]);
        subset(index+1,nums,curr_or);
    }
    int countMaxOrSubsets(vector<int>& nums) {
        subset(0,nums,0);
        return cnt;
    }
};