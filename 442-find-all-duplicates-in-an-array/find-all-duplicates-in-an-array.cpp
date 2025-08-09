class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
    vector<int> dupl;
    sort(nums.begin(), nums.end()); // O(n log n)
    
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] == nums[i - 1]) {
            if (dupl.empty() || dupl.back() != nums[i]) {
                dupl.push_back(nums[i]);
            }
        }
    }
    return dupl;
}

};