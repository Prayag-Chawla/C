#include <iostream>
using namespace std;
class Distance {
   private:
   int feet;
   int inches;
   public:
   // Constructor
   Distance(int f, int i) {
      feet = f;
      inches = i;
   }
   // method to display distance
   void display() {
      cout << "F: " << feet << " I:" << inches <<endl;
   }
   // overloaded minus(-) operator
   Distance operator-() {
      feet = -feet;
      inches = -inches;
      return Distance(feet, inches);
   }
};
int main() {
   Distance D1(3, 4), D2(-1, 10);
   D1;
   D1.display();
   D2;
   D2.display();
   return 0;
}