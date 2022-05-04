#include <iostream>
using namespace std;

class Three_D {/* w  w w    . d  e  m  o  2 s  .  c  o    m*/
  int x, y, z; // 3-D coordinates
public:
  Three_D() { x = y = z = 0; }
  Three_D(int i, int j, int k) {x = i; y = j; z = k; }

  bool operator==(Three_D op2);


  void show() ;
} ;
 // Show X, Y, Z coordinates.
 void Three_D::show()
 {
   cout << x << ", ";
   cout << y << ", ";
   cout << z << "\n";
 }
//overload ==.
bool Three_D::operator==(Three_D op2)
{
   if((x == op2.x) && (y == op2.y) && (z == op2.z))
     return true;
   else
     return false;
}
 int main()
 {
   Three_D a(1, 2, 3), b(10, 10, 10), c;

   a.show();
   b.show();

   if(a == b)
        cout << "a equals b\n";
   else
        cout << "a does not equal b\n";


   return 0;
}