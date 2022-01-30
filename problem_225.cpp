#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b;
	cin >> a;
	int arr[a];
	for (int i = 0; i < a; i++) cin >> arr[i];
	cin >> b;
	int res = arr[0];
	for (int i = 0; i < a; i++) if (abs(res - b) > abs(b - arr[i])) res = arr[i];
	cout << res;
	return 0;
}