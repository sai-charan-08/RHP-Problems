#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int longestCommonSubstring(string text1, string text2) {

        int n = text1.length();
        int m = text2.length();

        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

        int ans = 0;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {

                if (text1[i - 1] == text2[j - 1]) {

                    dp[i][j] = 1 + dp[i - 1][j - 1];

                    ans = max(ans, dp[i][j]);
                }
                else {
                    dp[i][j] = 0;
                }
            }
        }

        return ans;
    }
};

int main() {

    string text1, text2;

    cout << "Enter first string: ";
    cin >> text1;

    cout << "Enter second string: ";
    cin >> text2;

    Solution obj;

    int result = obj.longestCommonSubstring(text1, text2);

    cout << "Length of Longest Common Substring: " << result << endl;

    return 0;
}
