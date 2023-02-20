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
    cout<<"the duplicate characters are : "<<endl;

    for(int i=0;i<n; i++)
    {
        count = 1;
        for(int j = i+1; j<n; j++)
        {
            if(str[i]==str[j])
            {
                count++;
            }
        }
        if(count>1)
        cout<<str[i]<<" ";
        
    }
    
    return 0;
    }
