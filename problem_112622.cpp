#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    // Apply classic optimizations
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // Input
    int w, n;
    cin >> w;
//    cin >> n;
//    vector<int> ingots(n);
//    for(int i = 0; i < n; i++) cin >> ingots[i];
    vector<int> ingots = vector<int>{1, 2, 5, 10};
    n = 4;
    vector<vector<int>> T(n, vector<int>(w + 1, 0));
    for(int i = 0; i < w + 1; i++) T[0][i] = 1;
    for(int i = 0; i < n; i++) T[i][0] = 1;

    for(int i = 1; i < n; i++) {
        T[i] = T[i - 1];
        for(int j = 1; j < w + 1; j++) {
            if(j < ingots[i]) {
                // If we can't reach this value using new coin, just copy last one
                T[i][j] = T[i - 1][j];
            } else {
                // If we can reach this value with new coin, increase counter
                T[i][j] = T[i - 1][j] + T[i][j - ingots[i]];
            }
        }
    }
    // Print the answer table
//    for(const auto& i : T) {
//        for(auto j : i) {
//            cout << j << " ";
//        }
//        cout << endl;
//    }
    cout << T[n - 1][w];
    // Main loop
    return 0;
}