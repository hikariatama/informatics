#include <iostream>

using namespace std;
int maximum = 0;
int check(int k) {
    if (k > 0) {
        if(k % 10 > maximum) maximum = k % 10;
        check(k / 10);
    }
    return maximum;
}
int main() {
    int n;
    cin >> n;
    cout << check(n);
    return 0;  
}

