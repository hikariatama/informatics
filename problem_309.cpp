#include <bits/stdc++.h>
using namespace std;

int Election (bool a, bool b, bool c) {
	int count1 = 0, count2 = 0;
	if(a == 0) count1 ++; else count2 ++;
	if(b == 0) count1 ++; else count2 ++;
	if(c == 0) count1 ++; else count2 ++;

	if(count1 > count2) return 0; else return 1;
}

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	cout << Election(a, b, c);
	return 0;
}