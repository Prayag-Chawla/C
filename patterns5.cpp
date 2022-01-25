#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1;
    while(i <=n) {
        int spaces = 1;
       
        while (spaces <= n - i)
        {
            cout << " ";
            spaces++;
        }
        int j = 1;
        int val = i;
        while(j <= i){
            cout << val;
            val++;
            j++;

        }
        val = 2 * (i - 1);
        while(val >= i){
            cout << val;
            val--;
        }
        cout << endl;
        i++;
    }
}