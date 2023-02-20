#include <iostream>
using namespace std;
int main()
{
    
    string str;
    int n = 0;
    cout<<"Enter the string : ";
    getline(cin, str);
    for(int i = 0; i<=str[i]; i++)
    {
        if(str[i]<=65 && str[i]<=90 || str[i]<=122 || str[i]==' ')
        {

        }
        else{
            n = n+1;

        }
    }
    if(n != 0)
    {
        cout<<"The string is not validated : ";

    }
    else
    {
        cout<<" The string is validated";

    }
    return 0;
}


   



// #include <iostream>
// using namespace std;
// int main()
// {
    
//     char a[100];
//     int count = 0;
//     cout<<"Enter the string : ";
//     cin.getline(a, 100);
//     for(int i = 0; i<=a[i]; i++)
//     {
//         if(a[i]<=65 && a[i]<=90 || a[i]<=250 || a[i]==' ')
//         {

//         }
//         else{
//             count = count+1;

//         }
//     }
//     if(count != 0)
//     {
//         cout<<"The string is not validated : ";

//     }
//     else
//     {
//         cout<<"The string is validated";

//     }
//     return 0;
// }




//   // C++ implementation of the approach
// #include <bits/stdc++.h>
// using namespace std;

// // Function that returns true if str
// // is a valid identifier
// bool isValid(string str, int n)
// {

// 	// If first character is invalid
// 	if (!((str[0] >= 'a' && str[0] <= 'z')
// 		|| (str[0] >= 'A' && str[0] <= 'Z')
// 		|| str[0] == '_'))
// 		return false;

// 	// Traverse the string for the rest of the characters
// 	for (int i = 1; i < str.length(); i++) {
// 		if (!((str[i] >= 'a' && str[i] <= 'z')
// 			|| (str[i] >= 'A' && str[i] <= 'Z')
// 			|| (str[i] >= '0' && str[i] <= '9')
// 			|| str[i] == '_'))
// 			return false;
// 	}

// 	// String is a valid identifier
// 	return true;
// }

// // Driver code
// int main()
// {
// 	string str = "_geeks123";
// 	int n = str.length();

// 	if (isValid(str, n))
// 		cout << "Valid";
// 	else
// 		cout << "Invalid";

// 	return 0;
// } 