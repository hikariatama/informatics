#include <bits/stdc++.h>

using namespace std;

#define int long long

int recursive_knapsack(int w, const vector<int>& weights, const vector<int>& prices, int i, int** dp) {
    if(i < 0) return 0;
    if(dp[i][w] != -1) return dp[i][w];
    if(weights[i] > w) {
        dp[i][w] = recursive_knapsack(w, weights,prices, i - 1, dp);
        return dp[i][w];
    } else {
        dp[i][w] = max(
                prices[i] + recursive_knapsack(w - weights[i], weights, prices, i - 1, dp),
                recursive_knapsack(w, weights, prices, i - 1, dp)
                );
        return dp[i][w];
    }
}

int init_knapsack(int w, const vector<int>& weights, const vector<int>& prices, int n) {
    int** dp;
    dp = new int*[n];
    for(int i = 0; i < n; i++) dp[i] = new int[w + 1];
    for(int i = 0; i < n; i++) for(int j = 0; j < w + 1; j++) dp[i][j] = -1;
    return recursive_knapsack(w, weights, prices, n - 1, dp);
}


signed main() {
    // Apply classic optimizations
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // Input
    int w, n;
    cin >> w >> n;
    vector<int> weights(n, 0);
    vector<int> prices(n, 0);
    for(int i = 0; i < n; i++) {
        cin >> weights[i];
        cin >> prices[i];
    }
    cout << init_knapsack(w, weights, prices, n);
}