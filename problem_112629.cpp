#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, tmp;
	string s;
	cin >> n;
	getline(cin, s);
	int a[n][n];
	for(int i = 0; i < n; i++) for(int j = 0; j < n; j++) a[i][j] = 0;
	for(int i = 0; i < n; i++) {
	    s = "";
		getline(cin, s);
		istringstream inp(s);
		while(inp >> tmp) {
		    if(tmp == 0) break;
			a[i][tmp - 1] = 1;
		}
	}
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
