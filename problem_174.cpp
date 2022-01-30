#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, counter=0, tmp;
	cin >> n;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cin >> tmp;
			counter += tmp;
		}
	}

	cout << counter / 2;

	return 0;
}