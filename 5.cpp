#include<iostream>
using namespace std;
int fibo(int n)
{
    if(n==1||n==0)
    {
        return 1;
    }
    return n*fibo(n-1);
}
int main(){
    int x;
    cout<<"Enter the number upto which you want the series:"<<endl;
    cin>>x;
    cout<<"The fibonacci series is: "<<endl;
   for (int i = 0; i <=x; i++)
   {
    cout<<fibo(i)<<" ";
   }
   
    return 0;

}