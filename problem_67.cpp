#include <iostream>
using namespace std;
 
int main() {
    int length, counter = 0;
    cin >> length;
    int mass[length];
    for(int i = 0; i < length; i++) cin >> mass[i];
    for(int i = 1; i < length - 1; i++) if((mass[i] > 0 && mass[i - 1] > 0) || (mass[i] < 0 && mass[i - 1] < 0) || (mass[i] > 0 && mass[i + 1] > 0) || (mass[i] < 0 && mass[i + 1] < 0)) {
    		counter ++;
    		break;
    	}
    if(counter > 0) cout << "YES"; else cout << "NO";
}