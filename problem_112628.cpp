#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, tmp;
	bool found = false;
	cin >> n;
	for(int i = 0; i < n; i ++) {
		found = false;
		for(int j = 0; j < n; j++) {
			cin >> tmp;
			if(tmp == 1){
				cout << j + 1 << ' ';
				found = true;
			}
		}
		if(!found) cout << 0;
		cout << endl;
	}
}
