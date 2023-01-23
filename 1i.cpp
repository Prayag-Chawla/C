#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a[] = {1, 2, 3, 2, 3, 4, 5, 5};
    int n = sizeof(a) / sizeof(a[0]);
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] != a[j])
            a[++j] = a[i];
    }
    n = j + 1;
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}