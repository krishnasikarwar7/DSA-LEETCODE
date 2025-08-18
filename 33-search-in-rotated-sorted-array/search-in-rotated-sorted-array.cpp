class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0, high = n - 1;
        int mid;

        while (low < high) {
            mid = (low + high) / 2;
            if (nums[mid] >= nums[0]) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }

        int p = low; 
        low = 0, high = n - 1;
        if (target >= nums[p] && target <= nums[n - 1]) {
            low = p;
        } else {
            high = p - 1;
        }

        while (low <= high) {
            mid = (low + high) / 2;
            if (nums[mid] < target) 
            {
                low = mid + 1;
            }
            else if (nums[mid] > target) 
            {
                high=mid - 1;
            }
            else
            {
                return mid;
            }
        }

        return -1;
    }
};
