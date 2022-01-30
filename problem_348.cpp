#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	for(int i = 0; i <= 1000; i++) {
	    if(((a * i * i * i) + (b * i * i) + (c * i) + d) == 0) cout << i << " ";
	}
	return 0;
}