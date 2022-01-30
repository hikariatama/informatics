#include <bits/stdc++.h>
using namespace std;

int main() {
	int l, counter = 0;
	cin >> l;
	int mass[l];
	for(int i = 0; i < l; i++) cin >> mass[i];
	for(int i = 0; i < l; i++) if(mass[i] > 0) counter ++;
	cout << counter;
	return 0;
}