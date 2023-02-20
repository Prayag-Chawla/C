#include<iostream>
#include<string.h>
using namespace std;
int main()
{
   string text;
   cout<<"Enter the string : "<<endl;
   getline(cin, text);
   for(int i =0;i<=text[i]; i++)
   {
    if(text[i] >= 65 && text[i] <= 90)
    {
        text[i] = text[i] + 32;

    }
   
}
cout<<"The converted string to lowercase is : "<<endl;
cout<<text;
return 0;
}

