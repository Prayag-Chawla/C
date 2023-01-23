#include <iostream>
using namespace std;
int main() 
{
    int n, x;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int a[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Enter the element to be searched: ";
    cin >> x;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            cout << "Element found at index " << i << endl;
            return 0;
        }
    }
    cout << "Element not found in the array." << endl;
    return 0;
}




