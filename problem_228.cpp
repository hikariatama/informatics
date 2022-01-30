#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c;
	cin >> a;
	int arr[a];
	for (int i = 0; i < a; i++) cin >> arr[i];
	int maximum = arr[0];
	int maximum_index = 1;
	for (int i = 0; i < a; i++) {
		if (arr[i] > maximum) {
			maximum = arr[i];
			maximum_index = i + 1;
		}
	}
	cout << maximum_index;

}