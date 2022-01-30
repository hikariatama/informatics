#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c, counter = 0;
	cin >> a >> b >> c;
	int mass[c];
	for(int i = 0; i < c; i++) {
		mass[i] = rand() % (b - a + 1) + a;
		cout << mass[i] << " ";
		if(mass[i] / 10 % 2 == 0) counter ++;
	}
	cout << endl << counter;
	return 0;
}