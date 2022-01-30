#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, maxSum = 0, maxIndex = 0;
	cin >> n >> m;
	int mass[n][m];
	int flip[m][n];
	for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) cin >> mass[i][j];
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			flip[j][n - i - 1] = mass[i][j];
		}
	}

	cout << m << " " << n << endl;
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			cout << flip[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}  
// 1 2 3 4
// 5 6 7 8


// 5 1
// 6 2
// 7 3
// 8 4