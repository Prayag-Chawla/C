#include<iostream>
using namespace std;
int main(){
int n;
cin  >> n;
int currrow = 1;
while(currrow <= n){
    int currcol = 1;
    char ch ='A' + currrow -1;
    while(currcol <= currrow){
        cout << ch;
        currcol++;
    }
    cout << endl;
    currrow++;
    }
}