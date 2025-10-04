class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int> nums;
        int row=matrix.size();
        int col=matrix[0].size();

        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                nums.push_back(matrix[i][j]);
            }
        }

        return binary_search(nums.begin(),nums.end(),target);
    }
};