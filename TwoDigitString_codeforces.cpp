#include <iostream>
#include <vector>
#include <string>
using namespace std;

int solve() {
    string s1, s2;
    cin >> s1 >> s2;

    int r = s1.length();
    int c = s2.length();

    vector<int> pa(r + 1, 0), pb(c + 1, 0);

    for (int i = 1; i <= r; i++)
        pa[i] = (pa[i - 1] + (s1[i - 1] - '0')) % 10;

    for (int i = 1; i <= c; i++)
        pb[i] = (pb[i - 1] + (s2[i - 1] - '0')) % 10;

    if (pa[r] != pb[c])
        return -1;

    vector<vector<int>> dp(r + 1, vector<int>(c + 1, 0));

    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            if (pa[i] == pb[j])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    return dp[r][c];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    while (tc--) {
        cout << solve() << '\n';
    }

    return 0;
}
