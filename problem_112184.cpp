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
   if (n >= 16) {
      recursion(n / 16);
   }
   if (n % 16 == 10) {
    cout << "A";
   } else if (n % 16 == 11) {
    cout << "B";
   } else if (n % 16 == 12) {
    cout << "C";
   } else if (n % 16 == 13) {
    cout << "D";
   } else if (n % 16 == 14) {
    cout << "E";
   } else if (n % 16 == 15) {
    cout << "F";
   } else {
    cout << n % 16;
   }
   // cout << ;
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