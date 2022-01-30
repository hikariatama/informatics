#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, l;
	cin >> a >> b >> l;
	int mass[l];
	for(int i = 0; i < l; i++) mass[i] = rand() % (b - a + 1) + a;
	for(int i = 0; i < l; i++) cout << mass[i] << " ";
	cout << endl;
	float sum = 0;
	for(int i = 0; i < l; i++) sum += mass[i];
	cout << fixed << setprecision(3) << sum / l;
	return 0;
}