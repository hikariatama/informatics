#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, global_j = 0;
	cin >> a >> b;
	int mass[a][b];
	for(int i = 0; i < a; i++) {
		global_j = 0;
		if(i % 2 != 0) {
			for(int j = (i + 1) * b - 1; j >= i * b; j--) {
				mass[i][global_j] = j;
				global_j ++;
			}
		} else {
			for(int j = i * b; j <= (i + 1) * b - 1; j++) {
				mass[i][global_j] = j;
				global_j ++;
			}
		}
	}

	for(int i = 0; i < a; i++) {
		for(int j = 0; j < b; j++) {
			if(mass[i][j] < 10) {
				cout << " " << mass[i][j] << " ";
			} else {
				cout << mass[i][j] << " ";
			}
		}
		   cout << endl;
	}
	return 0;
}