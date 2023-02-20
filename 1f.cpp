#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str;
    cout<<"Enter the string : "<<endl;
    cin>>str;
    int n = 0, count = 0;
    for(int i=0;i<=str[i]; i++)
    {
        n=n+1;
    }
    for(int i=0;i<n/2; i++)
    {
        if(str[i]!=str[n-i-1])
        {
            count=count + 1;
        }
    }
    if(count ==0)
    {
        cout<<"The string is a palindrome"<<endl; 
    }
    else
    {
        cout<<"The string is not a palindrome"<<endl;
    }
    return 0;
    }
