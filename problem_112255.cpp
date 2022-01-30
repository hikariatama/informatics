#include <bits/stdc++.h>

using namespace std;
long long maximum = -INT_MAX;

long long check(long long n) {
    if(n == 0) return maximum;
    if(n > maximum) maximum = n;
    cin >> n;
    return check(n);
}
int main() {
    long long n;
    cin >> n;
    cout << check(n);
    return 0;
}