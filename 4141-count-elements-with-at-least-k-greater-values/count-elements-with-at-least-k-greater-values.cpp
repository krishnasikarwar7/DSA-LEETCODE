class Solution {
public:
    int countElements(vector<int>& nums, int k) {
        
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int c = 0;
        unordered_map<int, int> freq;
        for (int i = 0; i < n; i++) {
            freq[nums[i]] = i;
        }

        for (int i = 0; i < n; i++) {
            int val = nums[i];
            int lastIdx = freq[val];
            int strictGreater = (n - 1) - lastIdx;

            if (strictGreater >= k)
                c++;
        }

        return c;
    }
};
