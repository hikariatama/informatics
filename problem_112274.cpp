#include <bits/stdc++.h>
using namespace std;

int main() {
	int from, size, step;
	cin >> from >> step >> size;
	int array[size];
	for(int i = size - 1; i >= 0; i--) {
		array[i] = from + i * step;
		cout << array[i] << " ";
	}
	return 0;
}