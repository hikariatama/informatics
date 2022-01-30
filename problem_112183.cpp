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
   if (n >= 8) {
      recursion(n / 8);
   }
   cout << n % 8;
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