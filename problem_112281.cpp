#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, l;
	cin >> a >> b >> l;
	int mass[l];
	for(int i = 0; i < l; i++) mass[i] = rand() % (b - a + 1) + a;
	for(int i = 0; i < l; i++) cout << mass[i] << " ";
	cout << endl;
	//Проверка на то, есть ли в массиве четные элементы
	int max = -2000000;
	for(int i = 0; i < l; i++) {
		if(mass[i] % 2 == 0 && mass[i] > 0 && mass[i] > max) {
			max = mass[i];
		}
	}
	if(max == -2000000) cout << -1; else cout << max;
	return 0;
}