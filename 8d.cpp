#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    string str = "geeksforgeeks";
    istringstream in(str);
  
    string word;
    in >> word;
    cout << "After reading the word \"" << word
        << "\" tellg() returns " << in.tellg() << '\n';
}