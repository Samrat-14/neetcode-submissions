class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = board.size();
        unordered_map<string, unordered_set<char>> rows, cols, squares;

        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                if (board[i][j] == '.') continue;

                string r = to_string(i);
                string c = to_string(j);
                string sq = to_string(i/3) + '_' + to_string(j/3);

                if (rows[r].contains(board[i][j]) || cols[c].contains(board[i][j]) || squares[sq].contains(board[i][j])) {
                    return false;
                }

                rows[r].insert(board[i][j]);
                cols[c].insert(board[i][j]);
                squares[sq].insert(board[i][j]);
            }
        }

        return true;
    }
};
