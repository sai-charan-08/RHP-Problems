#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

    int rows, cols;
    vector<vector<int>> dp;

    int dfs(vector<vector<int>>& matrix, int r, int c)
    {
        if(dp[r][c] != -1)
            return dp[r][c];

        int ans = 1;

        int dr[4] = {-1, 1, 0, 0};
        int dc[4] = {0, 0, -1, 1};

        for(int i = 0; i < 4; i++)
        {
            int nr = r + dr[i];
            int nc = c + dc[i];

            if(nr >= 0 && nc >= 0 &&
               nr < rows && nc < cols &&
               matrix[nr][nc] > matrix[r][c])
            {
                ans = max(ans, 1 + dfs(matrix, nr, nc));
            }
        }

        return dp[r][c] = ans;
    }

    int longestIncreasingPath(vector<vector<int>>& matrix)
    {
        rows = matrix.size();
        cols = matrix[0].size();

        dp.assign(rows, vector<int>(cols, -1));

        int longest = 0;

        for(int r = 0; r < rows; r++)
        {
            for(int c = 0; c < cols; c++)
            {
                longest = max(longest, dfs(matrix, r, c));
            }
        }

        return longest;
    }
};

int main()
{
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));

    cout << "Enter matrix elements:\n";

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
    }

    Solution obj;

    cout << "Longest Increasing Path Length: "
         << obj.longestIncreasingPath(matrix);

    return 0;
}
