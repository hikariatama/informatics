#include <bits/stdc++.h>
using namespace std;
int main() {
	int a;
	cin >> a;
	int arr[a];
	arr[0] = 1;
	arr[1] = 1;
	for(int i = 2; i < a; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	cout << arr[a - 1];
	return 0;
}