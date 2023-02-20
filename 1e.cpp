// #include<iostream>
// using namespace std;
  
// // Function to reverse a string
// void reverseStr(string& str)
// {
//     int n = str.length();
  
//     // Swap character starting from two
//     // corners
//     for (int i = 0; i < n / 2; i++)
//         swap(str[i], str[n - i - 1]);
// }
  
// // Driver program
// int main()
// {
//     string str = "geeksforgeeks";
//     reverseStr(str);
//     cout << str;
//     return 0;
// }


#include<iostream>
using namespace std;
int main()
{
    string str,strnew;
    cout<<"Enter the string : "<<endl;
    cin>>str;
    int n=0;
    for(int i = 0; i<=str[i]; i++)
    {
        n = n+1;

    }
    cout<<"The reversed string is : "<<endl;
    for(int i = 0; i<=n; i++)
    {
        strnew[i] = str[n-i-1];


    }
    for(int i = 0; i<=n; i++)
    {
        cout<<strnew[i];

    }
    return 0;

}




// #include<iostream>
// using namespace std;
// void reverse(string& s)
// {
//     int n=s.length();
//     for(int i=0;i<n/2;i++)
//         swap(s[i],s[n-i-1]);
// }
// int main()
// {
//     string s;
//     cout<<"Enter the string: ";
//     getline(cin,s);
//     reverse(s);
//     cout<<s;
// }