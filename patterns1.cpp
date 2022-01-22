#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; ++i) {
        int digit = i;
        for (int j = 0; j < i; ++j)
            cout << digit++;
        cout << endl;
    }
    
    cout << endl;
    
    int start = 1;
    for(int i = 4; i > 0; --i) {
        int number = start;
        for (int j = i; j > 0; --j) {
            cout << number << ' ';
            number += 1;
        }
        cout << endl;
        start -= (i-1)*4;
    }
	return 0;
}
