#include <bits/stdc++.h>
using namespace std;

int minimum(int a, int b, int c, int d) {
	return min({a, b, c, d});
}

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << minimum(a, b, c, d);
	return 0;
}