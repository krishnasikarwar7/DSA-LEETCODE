class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> seen;
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                char c=board[i][j];
                if(c=='.') continue;

                int box=(i/3)*3 + (j/3);

                string rowKey=string(1,c)+ "r"+ to_string(i);
                string colKey=string(1,c)+ "c"+ to_string(j);
                string boxKey=string(1,c)+ "b"+ to_string(box);

                if(seen.count(rowKey)||seen.count(colKey)||seen.count(boxKey))
                    return false;

                seen.insert(rowKey);
                seen.insert(colKey);
                seen.insert(boxKey);
            }
        }
        return true;
    }
};