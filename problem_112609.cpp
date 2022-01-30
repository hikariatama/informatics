#include <bits/stdc++.h>
using namespace std;
// #define int long long

vector<int> find_for(int n) {
    if(n == 2) return vector<int>{1, 1, 1, 1};
    else {
        vector<int> previous = find_for(n - 1);
        return vector<int>{previous[0] + previous[2], previous[0] + previous[2], previous[1] + previous[3], previous[1]};
    }
}

int sum(const vector<int>& array) {
    int sum = 0;
    for(auto i : array) sum += i;
    return sum;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int row;
    cin >> row;
    cout << sum(find_for(row));
    return 0;
}

// n = 2: res[2] = {AA, AB, BA, BB}
// n = k: res[n] = {
//	res[n - 1][0] + res[n - 1][2],
//	res[n - 1][0] + res[n - 1][2],
//	res[n - 1][1] + res[n - 1][3],
//	res[n - 1][1]
//} => ans[n] = sum(res[n])
// >> 3
// << 7

