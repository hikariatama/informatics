#include <bits/stdc++.h>
using namespace std;

int Xor (bool a, bool b) {
	if(a == b) return 0;
	if((a == 1 && b == 0) || (b == 1 && a == 0)) return 1;
}

int main() {
	int a, b;
	cin >> a >> b;
	cout << Xor(a, b);
	return 0;
}