#include <bits/stdc++.h>
using namespace std;

int main() {
	short int num;
	cin >> num;
	int arr[num][num];
	for (int i = 0; i < num; i++) {
		for(int j = 0; j < num; j++) {
			arr[i][j] = 0;
		}
	}
	for (int i = 0; i < num; i++) {
		arr[i][num - 1 - i] = 1;
	}
	for (int j = 1; j < num; j++) {
		for (int i = num - j; i < num; i++) {
			arr[j][i] = 2;
		}
	}
	for (int i = 0; i < num; i++) {
		for(int j = 0; j < num; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	return false;
}