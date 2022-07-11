#include<iostream>
using namespace std;
class example
{
private:
int a;
public:
example(int); //Parameterized Constructor
example(example &); //Copy Constructor
void display();
};
example::example(int x)
{
a=x;
}
example::example(example &p)
{
a=p.a;
}

void example::display()
{
cout<<a;
}
int main()
{
example e1(5);
example e2(e1); //or, example e2=e1;
e2.display();
return 0;
}

