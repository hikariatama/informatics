#include <iostream>
using namespace std;
 
int main() {
    int n, counter = 0;
    cin >> n;
    int mass[n];
    for(int i = 0; i < n; i++) cin >> mass[i];
    for(int i = 1; i < n - 1; i++) {
    	if(mass[i] > mass[i - 1] && mass[i] > mass[i + 1]) {
    		counter ++;
    	}
    }
    cout << counter;
}