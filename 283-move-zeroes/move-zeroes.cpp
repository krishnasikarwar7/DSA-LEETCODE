class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0; // pointer to find zeros
        int j = 0; // pointer to find non-zeros

        while (j < nums.size()) {
            if (nums[j] != 0) {
                swap(nums[i], nums[j]);
                i++;
            }
            j++;
        }
    }
};
