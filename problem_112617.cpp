#include <bits/stdc++.h>

using namespace std;

map<int, int> path;
map<int, int> cache;
vector<int> types;

int max(vector<int> vec) {
    /**
     * Find the maximum value in vector
     * @param vector to lookup maximum element in
     * @return maximum value in this vector
     * */
    int maximum = vec[0];
    for (auto i: vec) if (i > maximum) maximum = i;
    return maximum;
}

int count_for(int n) {
    /**
     * Find the least quantity of bottles to fill in
     * @param n Number of liters you need to fill the bottles with
     * @return k Number of bottles you need
     * */

    // Base case of recursion
    if (n <= max(types)) {
        // If we have this n in types or n == 0, we have the solution
        if (find(types.begin(), types.end(), n) != types.end() || n == 0) return 1;
        // If n is non-existent in types, we have no solution for this case
        else return -1;
    }
    // If we already counted the value for this n, return it from cache
    if (cache.count(n)) return cache[n] + 1;
    // Define
    map<int, int> counting;
    int rand_type = INT_MAX, rand_val = INT_MAX;
    // Iterate over types to look up the value for each next possible step
    for (auto type: types) {
        // Count value
        int temp = count_for(n - type);
        // If there is solution for this step
        if (temp != -1) {
            // Add it to result
            counting[type] = temp;
            // And save last value
            rand_type = type;
            rand_val = temp;
        }
    }
    // If no results found, no result for the whole chain
    if (rand_type == INT_MAX) return -1;
    // Define the map with minimal value
    pair<int, int> min_type = {rand_type, rand_val};
    // Find the shortest path
    for (auto i: counting) {
        if (i.second < min_type.second)
            min_type = i;
    }
    // Save it to path and cache
    path[n] = min_type.first;
    cache[n] = min_type.second;
    // Return result
    return min_type.second + 1;
}

signed main() {
    // Apply classic optimizations
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // Input
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < k; i++) {
        int t;
        cin >> t;
        // If the bottle is larger than the milk we have, skip it
        if (t > n) continue;
        types.push_back(t);
    }
    // If there is no possible bottles to fill, return -1
    if (types.empty()) {
        cout << -1;
        exit(0);
    }
    // Recursively find the answer
    int res_1 = count_for(n);

    // Lookup for the path in global variable
    int temp = n;
    vector<int> res;
    while (temp > max(types)) {
        int tmp = path[temp];
        res.push_back(tmp);
        temp -= tmp;
    }
    res.push_back(temp);
    // Sort path from the biggest items to the lowest
    sort(res.rbegin(), res.rend());
    // Print path
    cout << res_1 << '\n';
    for (auto i: res) cout << i << " ";
    return 0;
}