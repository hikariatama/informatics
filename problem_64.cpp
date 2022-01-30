#include <bits/stdc++.h>
using namespace std;

int main() {
  int a;
  cin >> a;
  int mass[a] = {};
  for(int i = 0; i < a; i++) {
  	cin >> mass[i];
  	if (mass[i] % 2 == 0) cout << mass[i] << " ";
  }
  return 0;
}
