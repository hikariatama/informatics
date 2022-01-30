#include <bits/stdc++.h>

using namespace std;
bool simple(int n, int i) {
    if(n == i) return true;
    else if(n == 1 || n % i == 0) return false;
    else return simple(n, i + 1);
}
int main() {
    int n;
    cin >> n;
    if(simple(n,2)) cout << "YES"; else cout << "NO";
    return 0;
}