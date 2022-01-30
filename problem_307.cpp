#include <bits/stdc++.h>
using namespace std;

double power (double a, int n) {
	return pow(a, n);
}

int main() {
	double a;
	int n;
	cin >> a >> n;
	cout << power(a, n);
	return 0;
}