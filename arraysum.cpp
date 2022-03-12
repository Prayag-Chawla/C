#include<iostream>
using namespace std;
int main(){
    int size;
    cin >> size;
    int arr[1000000];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    int result = 0;
    for(int i = 0; i < size; i++){
        result += arr[i];
    }
    cout << result << endl;
}
