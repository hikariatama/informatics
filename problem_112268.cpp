#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int array[n];
	for(int i = 1; i <= n; i++) array[i] = i;
	for(int i = 1; i <= n; i++) cout << array[i] << " ";
	return 0;
}