#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, maxNum = -INT_MAX, counter = 0;
	cin >> n >> m;
	int mass[n][m];
	for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) cin >> mass[i][j];
	for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) if(maxNum < mass[i][j]) maxNum = mass[i][j];
	for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) if(mass[i][j] == maxNum) {
		counter ++;
		break;
	}
	cout << counter;
	return 0;
}
