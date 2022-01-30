#include <bits/stdc++.h>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	int arr[a];
	arr[0] = 1;
	arr[1] = 1;
	for(int i = 2; i < a; i++) {
		if(i <= b) {
			int tempsum = 0;
			for(int j = 0; j < i; j++) tempsum += arr[j];
			arr[i] = tempsum;
		} else {
			int tempsum = 0;
			for(int j = i - b; j < i; j++) tempsum += arr[j];
			arr[i] = tempsum;
		}
	}
	cout << arr[a - 1];
// 	for(int i = 0; i < a; i++) cout << arr[i] << " ";
	return 0;
}