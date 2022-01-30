#include <bits/stdc++.h>
using namespace std;

map<int, int> path;
map<int, int> cache;

int count_for(int n) {
    int current;
    if(n <= 6) return 1;
    if(cache.count(n)) return cache[n];
    int _1 = count_for(n - 1);
    int _5 = count_for(n - 5);
    int _6 = count_for(n - 6);
    if(min({_1, _5, _6}) == _1) path[n] = 1;
    else if(min({_1, _5, _6}) == _5) path[n] = 5;
    else if(min({_1, _5, _6}) == _6) path[n] = 6;
    int answer = min({_1, _5, _6}) + 1;
    cache[n] = answer;
    return answer;
}

signed main() {
    // Apply classic optimizations
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    cout << count_for(n) << endl;
    int temp = n;
    vector<int> res;
    while(temp > 6) {
        int tmp = path[temp];
        res.push_back(tmp);
        temp -= tmp;
    }
    res.push_back(temp);
    sort(res.rbegin(), res.rend());
    for(auto i : res) cout << i << " ";
    return 0;
}