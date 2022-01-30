#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {
    // Apply classic optimizations
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // Input
    int n, m;
    cin >> n >> m;
    int** dp = new int*[n];
    for(int i = 0; i < n; i++) {
        dp[i] = new int[m];
        for(int j = 0; j < m; j++) dp[i][j] = 0;
    }
    dp[0][0] = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(i == 0 && j == 0) continue;
            if(i - 1 >= 0 && j - 1 >= 0)
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            else if(i - 1 >= 0 && j - 1 < 0)
                dp[i][j] = dp[i - 1][j];
            else if(i - 1 < 0 && j - 1 >= 0)
                dp[i][j] = dp[i][j - 1];
            else
                dp[i][j] = -1;

//            cout << dp[i][j] << " ";
        }
//        cout << '\n';
    }

    cout << dp[n - 1][m - 1];
}