#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main() {
	float n, n2, n4, n8;
	cin >> n;
	n2 = n*n;
	n4 = n2*n2;
	n8 = n4*n4;
	cout << fixed << setprecision(3) << n8 * n2;
}