#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, maxSum, maxIndex, tempSum;
	cin >> n >> m;
	int mass[n][m];
	for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) cin >> mass[i][j];
	for(int i = 0; i < n; i++) {
		tempSum = 0;
		for(int j = 0; j < m; j++) tempSum += mass[i][j];
		if(tempSum > maxSum) {
			maxSum = tempSum;
			maxIndex = i;
		}
	}
	cout << maxSum << endl << maxIndex;
	return 0;
}