#include <iostream>
using namespace std;
 
int main() {
    int n, counter = 0, buffer;
    cin >> n;
    int mass[n];
    for(int i = 0; i < n; i++) cin >> mass[i];
    for(int i = 0; i < n - 1; i += 2) {
    	buffer = mass[i];
    	mass[i] = mass[i + 1];
    	mass[i + 1] = buffer;
    }
    for(int i = 0; i < n; i++) cout << mass[i] << " ";
}