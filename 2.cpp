// #include<iostream>    
// using namespace std;      
// int main()    
// {    
// int factorial(int);    
// int fact,value;    
// cout<<"Enter any number: ";    
// cin>>value;    
// fact=factorial(value);    
// cout<<"Factorial of a number is: "<<fact<<endl;    
// return 0;    
// }    
// int factorial(int n)    
// {    
// if(n<0)    
// return(-1); /*Wrong value*/      
// if(n==0)    
// return(1);  /*Terminating condition*/    
// else    
// {    
// return(n*factorial(n-1));        
// }    
// }  


#include<iostream>
using namespace std;
int fact(int n) {
if(n==0) { 
return 1;
}
int ans = fact(n-1); 
return n * ans; 
}
int main() {
int num;
cout<<"Enter the input number : ";
cin >> num;
cout<<"The factorial of the number is : "<<fact(num);
// cout << fact(num);
return 0;
}
