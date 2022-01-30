#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, l;
	cin >> a >> b >> l;
	int mass[l];
	for(int i = 0; i < l; i++) mass[i] = rand() % (b - a + 1) + a;
	for(int i = 0; i < l; i++) cout << mass[i] << " ";
	cout << endl;
	float sum = 0, sum2 = 0;
	float num = 0, num2 = 0;
	for(int i = 0; i < l; i++) {
		if(mass[i] < 50) {
			sum += mass[i];
			num ++;
		} else {
			sum2 += mass[i];
			num2 ++;
		}
	}
	if(num != 0) cout << fixed << setprecision(3) << sum / num << " "; else cout << "0.000 ";
	if(num2 != 0) cout << fixed << setprecision(3) << sum2 / num2; else cout << "0.000";
	return 0;
}