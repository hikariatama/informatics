#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	float a, b, c;
	float floatedResult;
	cin >> a >> b >> c;
	cout << a << "+" << b << "+" << c << "=" << a + b + c << endl;
	cout << a << "*" << b << "*" << c << "=" << a * b * c << endl;
	floatedResult = (a + b + c) / 3;
	cout << "(" << a << "+" << b << "+" << c << ")/3=" << fixed << setprecision(3) << floatedResult;
}