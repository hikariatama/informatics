#include <bits/stdc++.h>
using namespace std;
// #define int long long

map<int, vector<int>> paths;

int find_path(int n) {
    if(n == 1) return 1;
    auto v = paths[n];
    int s = 0;
    for(auto i : v) s += find_path(i);
    return s;
}

int find_for(int n, int k, const vector<int>& frogs, int result = 0) {
    if(n == 1) return 1;
    for(int j = n - 1; j > (n - k - 1 < 0 ? 0 : n - k - 1); j--) {
        if(find(frogs.begin(), frogs.end(), j) == frogs.end()) {
            int tmp = find_for(j, k, frogs, result);
            result += tmp;
            if(paths.find(n) == paths.end()) paths[n] = vector<int>(0);
            if(find(paths[n].begin(), paths[n].end(), j) == paths[n].end()) paths[n].push_back(j);
        }
    }
    return result;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k, l;
    cin >> n >> k;
    cin >> l;
    vector<int> frogs(l, 0);
    for(int i = 0; i < l; i++) cin >> frogs[i];
    find_for(n, k, frogs);
    cout << find_path(n);
    return 0;
}
