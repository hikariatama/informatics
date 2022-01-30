#include <iostream>
using namespace std;
 
int main() {
    int n, counter = 0, buffer;
    cin >> n;
    int mass[n];
    for(int i = 0; i < n; i++) cin >> mass[i];
    buffer = mass[n - 1];
	for(int i = n - 2; i >= 0; i--) {
		mass[i + 1] = mass[i];
	}
	mass[0] = buffer;
	for(int i = 0; i < n; i++) cout << mass[i] << " ";
}