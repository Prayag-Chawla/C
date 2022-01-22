#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main () {
    double basic;
    cin >> basic;
    char grade;

    double hra = 0.2 * basic;
    double da = 0.5 * basic;
    int allowance;
    if(grade == 'A') {
        allowance = 17000;
    }
    else if(grade == 'B') {
        allowance = 15000;
    }
    else {
        allowance = 13000;
    }
    double pf = 0.11 * basic;
    double totalSalary = basic + hra + da + allowance - pf;
    int ans = round(totalSalary);
    cout << ans;
}