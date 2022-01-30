#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, tmp, counter = 0, j;
	string input;
	cin >> n;
    vector<int> b;
    vector<vector<int>> a(n, vector<int>(n, 0));
    getline(cin, input);
	for(int i = 0; i < n; i++) for(int j = 0; j < n; j++) a[i][j] = 0;
	for(int i = 0; i < n; i ++) {
		getline(cin, input);
    	istringstream inp(input);
    	j = 0;
    	while(inp >> tmp) {
    	    a[i][j] = tmp;
    	    j++;
    	}
	}
	
	getline(cin, input);
	istringstream inp(input);
	while(inp >> tmp) {
	    b.push_back(tmp);
	}
	
	for(int i = 0; i < b.size() - 1; i++) {
	    if(a[b[i] - 1][b[i + 1] - 1] == 0) {
	        counter = 0;
	        break;
	    }
	    
	    counter += a[b[i] - 1][b[i + 1] - 1];
	}
	
	cout << counter;
}