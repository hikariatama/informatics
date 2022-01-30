#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, a, b;
	cin >> n >> m;
	int result[n];
	for(int i = 0; i < n; i++) result[i] = 0;
	for(int i = 0; i < m; ++i){
		cin >> a >> b;
		result[a - 1]++;
		result[b - 1]++;
	}
	for(int i = 0; i < n; i++) cout << result[i] << " ";
	return 0;
}