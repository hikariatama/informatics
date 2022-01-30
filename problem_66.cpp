#include <iostream>
using namespace std;
 
int main() {
    int length, counter = 0;
    cin >> length;
    int mass[length];
    for(int i = 0; i < length; i++) cin >> mass[i];
    for(int i = 1; i < length; i++) if(mass[i] > mass[i - 1]) counter ++;
    cout << counter;
}