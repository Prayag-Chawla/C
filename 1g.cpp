#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 3, 2, 7, 5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0], maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            maxIndex = i;
        }
    }
    cout << "Index of largest number: " << maxIndex << endl;
    return 0;
}