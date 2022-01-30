#include <bits/stdc++.h>
using namespace std;

// string recursion(int n, string res) {
//     if(n == 0) {
//         return res;
//     }
//     stringstream ss;
//     ss << n % 8;
//     string r = ss.str();
//     return recursion(n / 8, r + res);
// }

void recursion(int n) {
   if (n >= 2) {
      recursion(n / 2);
   }
   cout << n % 2;
   return;
}

int main() {
    int n;
    cin >> n;
    string r = "";
    if (n < 0) {
        n = -n;
        r = "-";
    } else {
        r = "";
    }
    cout << r;
    recursion(n);
}