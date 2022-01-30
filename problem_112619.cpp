#include <bits/stdc++.h>

using namespace std;

#define int long long

vector<string> operations;
map<int, int> cache;
bool going_forward;

bool is_op(char operation) {
    /**
     * Check existence of operation
     * @param operation Operation to look for
     * @return existence of operation
     * */
    for(auto op : operations) if(op[0] == operation) return true;
    return false;
}

int count_for(int a, int b, int initiator = 0) {
    /**
     * Find the number of possible paths from a to b
     * @param a First number
     * @param b Second number
     * @param operation Allowed calc operations
     * @return k Maximum number of ways you can get from a to b
     * */

//    cout << "Counting for " << a << "<-" << initiator << endl;

    // Process cache
    if (cache.count(a)) return cache[a];
    // Base case of recursion
    // If we got far away from number, no path
    if (a > b && going_forward) return 0;
    if (a < b && !going_forward) return 0;
    // If we got to b, it's the case, count it
    if (a == b) return 1;
    // Find another possible paths recursively
    int _sum = 0;
    for (auto operation: operations) {
        // For each possible operation, start the recursion
        // 'char - 48' converts char to int, aka '1' -> 1
        int operation_val;
        stringstream converter;
        converter << operation.substr(1);
        converter >> operation_val;
        if (operation_val == 0) continue;
//        cout << a << " " << operation << endl;
        if (operation[0] == '*') _sum += count_for(a * operation_val, b, a);
        if (operation[0] == '+') _sum += count_for(a + operation_val, b, a);
        if (operation[0] == '-') _sum += count_for(a - operation_val, b, a);
        if (operation[0] == '/' && a % operation_val == 0) _sum += count_for(a / operation_val, b, a);
    }
    // Save value to cache
    cache[a] = _sum;
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
    int n;
    cin >> n;
    operations.resize(n);
    for (int i = 0; i < n; i++) cin >> operations[i];
    if(is_op('-') || is_op('/')) going_forward = false;
    else going_forward = true;
    cout << count_for(a, b);
    return 0;
}