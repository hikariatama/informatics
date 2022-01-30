#include <bits/stdc++.h>
using namespace std;

int main() {
	int size;
	cin >> size;
	int array[size];
	for(int i = 0; i <= size; i++) {
	    array[i] = 1;
	    for(int j = 0; j < i; j++) array[i] *= 2;
	}
	for(int i = size; i > 0; i--) cout << array[i] << " ";
	return 0;
}