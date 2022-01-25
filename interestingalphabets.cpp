#include<iostream>
using namespace std;
int main(){
int n;
cin  >> n;
int currrow = 1;
while(currrow <= n){
    int currcol = 1;
    char ch ='A' + n - currrow;
    while(currcol <= currrow){
        cout << char(ch + currcol - 1);
        currcol++;
    }
    cout << endl;
    currrow++;
    }
}