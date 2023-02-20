#include<iostream>
using namespace std;
int factorial(int n)
{
    if(n==1||n==0)
    {
        return 1;
    }
    return n*factorial(n-1);
}
int main(){
    int n,r,ans;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    cout<<"Enter the value of r: "<<endl;
    cin>>r;
    ans=factorial(n)/(factorial(r)*factorial(n-r));
    cout<<"The required answer of nCr is : "<<ans;
    return 0;

}