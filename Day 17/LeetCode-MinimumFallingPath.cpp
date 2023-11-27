class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        vector<vector<int>> dp(rows, vector<int>(cols, INT_MAX));

        for (int col = 0; col < cols; ++col) 
        {
            dp[0][col] = matrix[0][col];
        }
        for (int row = 1; row < rows; ++row) 
        {
            for (int col = 0; col < cols; ++col) 
            {
                dp[row][col] = matrix[row][col] + min({dp[row - 1][col], dp[row - 1][max(0, col - 1)], dp[row - 1][min(cols - 1, col + 1)]});
            }
        }

        int result = INT_MAX;
        for (int col = 0; col < cols; ++col) {
            result = min(result, dp[rows - 1][col]);
        }

        return result;
    }
};
