#include <bits/stdc++.h>
using namespace std;

int main() {
	int from, size;
	cin >> from >> size;
	int array[size];
	for(int i = 0; i < size; i++) array[i] = i + from;
	for(int i = 0; i < size; i++) cout << array[i] << " ";
	return 0;
}