#include <bits/stdc++.h>
using namespace std;

int main() {
	int fib;
	cin >> fib;
	vector<int> fibonacci;
	fibonacci.push_back(1);
	fibonacci.push_back(1);
	int i = 2;
	if(fib == 1) {
		cout << 2;
		return 0;
	}
	while(true) {
		fibonacci.push_back(fibonacci[i - 1] + fibonacci[i - 2]);
		if(fibonacci[i - 1] + fibonacci[i - 2] == fib) {
			cout << i + 1;
			return 0;
		} else if(fibonacci[i - 1] + fibonacci[i - 2] > fib) {
			cout << -1;
			return 0;
		}
		i++;
	}
	return 0;
}