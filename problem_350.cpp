#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c, d, e, counter = 0;
	cin >> a >> b >> c >> d >> e;
	for(int i = 0; i <= 1000; i++) {
	    if(
	    	((i * i * i * a) + (i * i * b) + (c * i) + d) == 0 && i - e != 0
	    ) counter++;
	}
	cout << counter;
	return 0;
}