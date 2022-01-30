#include <bits/stdc++.h>

using namespace std;

map<pair<int, int>, int> cache;

int count_for(int a, int b, const vector<string>&operations) {
    /**
     * Find the number of possible paths from a to b
     * @param a First number
     * @param b Second number
     * @return k Maximum number of paths you can get from a to b
     * */

    // Process cache
    if(cache.count(pair<int, int>{a, b})) return cache[pair<int, int>{a, b}];

    // Base case of recursion
    // If we got far away from number, no path
    if(a > b) return 0;
    // If we got to b, it's the case, count it
    if(a == b) return 1;
    // Find another possible paths recursively
    int _sum = 0;
    for(auto operation : operations) {
        // For each possible operation, start the recursion
        // 'char - 48' converts char to int, aka '1' -> 1
        if(operation[0] == '*') _sum += count_for(a * (operation[1] - 48), b, operations);
        if(operation[0] == '+') _sum += count_for(a + (operation[1] - 48), b, operations);
        if(operation[0] == '-') _sum += count_for(a - (operation[1] - 48), b, operations);
        if(operation[0] == '/') _sum += count_for(a / (operation[1] - 48), b, operations);
    }
    // Save value to cache
    cache[pair<int, int>{a, b}] = _sum;
    // Return the number of possible steps for this step
    return _sum;
}

signed main() {
    // Apply classic optimizations
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // Input
    int a, b;
    cin >> a >> b;
    vector<string> operations;
    operations.emplace_back("+1");
    operations.emplace_back("*3");
    cout << count_for(a, b, operations);
    return 0;
}