#include <iostream>
using namespace std;

int main() {
	int l;
	cin >> l;
	int mass[l];
	for(int i = 0; i < l; i++) cin >> mass[i];
	int max = mass[0];
	for(int i = 0; i < l; i++) if(max < mass[i]) max = mass[i];
	cout << max;
	return 0;
}