#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, counter = 1;
	cin >> a;
	for(int i = 1; i <= a; i++)
		for(int j = 0; j < i; j++)
			if(counter <= a) {
				cout << i << " ";
				counter ++;
			}
	return 0;
}