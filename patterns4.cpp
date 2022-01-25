#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int currrow = 1;
    while(currrow <= n){
        int currcol = currrow;
        while(currcol >= 1){
            cout << currcol;
            currcol--;

    }
    cout << endl;
    currrow++;
    } 
}