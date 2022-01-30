#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, maxN, maxM, maxNum = -INT_MAX;
	cin >> n >> m;
	int mass[n][m];
	for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) cin >> mass[i][j];
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) if(maxNum < mass[i][j]) {
			maxNum = mass[i][j];
			maxN = i;
			maxM = j;
		}
	}
	cout << maxNum << endl << maxN << " " << maxM;
	return 0;
}