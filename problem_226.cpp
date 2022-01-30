#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,c;
	cin >> a;
	int arr[a];
	for (int i = 0; i < a; i++) cin >> arr[i];
	cin >> c;
	vector<int> res;
	for (int i = 0; i < a; i++) if(arr[i] == c) res.push_back(i + 1);
	for (int i = 0; i < res.size(); i++) {
		cout << res[i] << " ";
	}

	return 0;
}