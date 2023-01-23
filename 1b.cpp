#include<iostream>
using namespace std;
int main() 
{
     cout<<"Enter the value of goal : "<<endl;
    int goal;
    cin>>goal;
   
    int sum = 0;
    for(int n = 1; n < goal; n++){
        sum += n;
        if(sum >= goal){
            cout<< n;
            return 0;
        }
    }
    return 0;
}