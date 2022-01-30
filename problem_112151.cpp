#include <iostream>
#include <iomanip>
#include <random>
#include <cstdlib>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	cout << rand() % (b - a + 1) + a << " " << rand() % (b - a + 1) + a << " " << rand() % (b - a + 1) + a << " " << rand() % (b - a + 1) + a << " " << rand() % (b - a + 1) + a;
}

