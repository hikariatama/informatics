#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, tmp, counter = 0;
	cin >> n;
	int a[n][n];
	for(int i = 0; i < n; i++) for(int j = 0; j < n; j++) a[i][j] = 0;
	for(int i = 0; i < n; i ++) {
		for(int j = 0; j < n; j++) {
			cin >> tmp;
			a[i][j] = tmp;
		}
	}
	for(int i = 0; i < n; i ++) {
		for(int j = 0; j < n; j++) {
			if(a[i][j] == a[j][i] && a[i][j] == 1) {
			    counter += 1;
			    a[i][j] = 0;
			    a[j][i] = 0;
			} else if (a[i][j] == 1) {
			    a[i][j] = 0;
			    counter += 1;
			}
		}
	}
	cout << counter;
}
