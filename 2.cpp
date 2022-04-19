#include <iostream>
using namespace std;
  
class Base {
    int i;
  
public:
    Base() {}
    void setBaseProperties(int i)
    {
        this->i = i;
    }
    void showBaseProperties()
    {
        std::cout << endl
                  << "i = " << i;
    }
    virtual ~Base() {}
};
  
class Child : public Base {
    int j;
    int k;
  
public:
    void setChildProperties(int i, int j, int k)
    {
        setBaseProperties(i);
        this->j = j;
        this->k = k;
    }
    void showChildProperties()
    {
        showBaseProperties();
        cout << " j = " << j << " k = " << k;
    }
};
  
int main()
{
    Child c;
    c.setChildProperties(1, 2, 3);
  
    // this exposed function is undesirable
    c.setBaseProperties(4); 
  
    c.showChildProperties();
    return 0;
}