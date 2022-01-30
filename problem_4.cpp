#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int a[n], b[k];
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < k; i++) cin >> b[i];
	for(int i = 0; i < k; i++) {
		int l = 0;
		int r = n - 1;
		int mid = 0;
		int search = b[i];
		while(l < r) {
			mid = (l + r) / 2;
			if(a[mid] < search) {
				l = mid + 1;
			} else {
				r = mid;
			}
		}

		if(a[r] == search) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	return 0;
}