#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {
    // Apply classic optimizations
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // Input
    int w, n;
    cin >> w >> n;
    // Define C-styled array
    int p[n];
    // Input
    for (int i = 0; i < n; i++) cin >> p[i];
    // Sort values so they are from lowest to highest
    sort(p, p + n);
    // Define solution C-styled array
    int T[n][w + 1];
    // Base-cases
    for (int i = 0; i < n; i++) T[i][0] = 0;
    for (int i = 0; i <= w; i++) if (i < p[0]) T[0][i] = 0; else T[0][i] = p[0];
    // Solution
    for (int i = 1; i < n; i++)
        for (int j = 0; j <= w; j++)
            if (j < p[i])
                T[i][j] = T[i - 1][j];
            else
                T[i][j] = max(
                        T[i - 1][j],
                        p[i] + T[i - 1][j - p[i]]
                );

    // Now we need to find the answer using solution table
    vector<int> answer;
    // Output the sum (use '\n' in case not to flush the buffer)
    cout << T[n - 1][w] << '\n';
    // In case we don't have the solution we don't need to find the path
    if(T[n - 1][w] == 0) exit(0);
    for (int i = n - 1; i >= 0; i--)
        if (T[i][w] != T[i - 1][w]) {
            answer.emplace_back(p[i]);
            w -= p[i];
        }
    sort(answer.begin(), answer.end());
    for (auto i: answer) cout << i << " ";
}