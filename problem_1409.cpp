#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a;
	int tmp;
	for(int i = 0; i < n; i++) {
		cin >> tmp;
		a.push_back(tmp);
	}
	sort(a.begin(), a.end());
	cout << a[0] << " " << a[1];
}