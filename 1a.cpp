#include <iostream>
using namespace std;
 
//Class declaration.
class Demo
{
    //Private block  to declare data member( X,Y ) of integer type.
    private:
        int X;
        int Y;
 
    //Public block of member function to access data members.
    public:
        //Declaration of default or no argument constructor to initialize data members.
            Demo (); 
        //To take input from user.
        void    Input(); 
        //To display output onn screen.
        void    Display();
     
};//End of class
 
//Definition of constructor.
Demo:: Demo()
{
    X = 0;
    Y = 0;
}
 
//Definition of Input() member function.
void Demo:: Input()
{
    cout << "Enter Value of X: "; cin >> X;
    cout << "Enter Value of Y: "; cin >> Y;
}
 
 
//Definition of Display() member function.
void Demo:: Display()
{
    cout << endl << "X: " << X;
    cout << endl << "Y: " << Y << endl;
}
 
int main()
{
    Demo d ; //Ctor autometically call when object is created.
 
    //Display value of data member.
    cout << endl <<"Method 1: " << endl;  
    cout << "Value after initialization : " ;
    d.Display();    
 
    d.Input();
    cout << "Value after User Input : ";
    d.Display();
 
 
    //We can also create object like this
    Demo d1 = Demo();
     
    //Display value of data member.
    cout << endl << "Method 2: " << endl;
    cout << "Value after initialization : ";
    d1.Display();   
     
    return 0;
}
