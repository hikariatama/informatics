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

void recursion(int n, int os) {
   if (n >= os) {
      recursion(n / os, os);
   }
   cout << n % os;
   // cout << ;
   return;
}

int main() {
    int n, os;
    cin >> n >> os;
    string r = "";
    if (n < 0) {
        n = -n;
        r = "-";
    } else {
        r = "";
    }
    cout << r;
    recursion(n, os);
}