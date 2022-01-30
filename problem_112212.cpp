#include <iostream>

using namespace std;
int counter = 0;
int check(int k) {
	if (k > 0) {
        if (k % 2 == 0) counter++;
        check(k / 10);
	}
	return counter;
}
int main() {
	int n;
	cin >> n;
	cout << check(n);
	return 0;
}

