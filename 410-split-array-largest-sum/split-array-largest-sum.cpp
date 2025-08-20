class Solution {
public:
    bool isPossible(vector<int>& nums, int n, int k, int mid)
    {
        int pagesum = 0;
        int studcount = 1;

        for (int i = 0; i < n; i++)
        {
            if (pagesum + nums[i] <= mid)
            {
                pagesum += nums[i];
            }
            else
            {
                studcount++;
                pagesum = nums[i];   // reset for new subarray

                if (studcount > k)   // too many subarrays
                    return false;
            }
        }
        return true;
    }

    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        long long sum = 0;
        for (int i = 0; i < n; i++)
            sum += nums[i];

        int low = *max_element(nums.begin(), nums.end());
        int high = sum;
        int ans = -1;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (isPossible(nums, n, k, mid))
            {
                ans = mid;
                high = mid - 1;  // try smaller largest sum
            }
            else
            {
                low = mid + 1;   // need larger largest sum
            }
        }
        return ans;
    }
};
