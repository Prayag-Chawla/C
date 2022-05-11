#include <iostream>
using namespace std;
void divide(int x,int y) throw(int,double){
    try{
        if (x==25 && y==0) throw x;
        if (x==34 && y==0) throw 90.7;
        if (x==98 && y==0) throw "error encountered";
    }
    catch(int x){
        cout << x << endl;
    }
    catch (float y){
        cout << y<<endl;
    }
    catch (const char *d){
        cout << d << endl;
    }
}
int main(){
    divide (25,0);
    divide (34,0);
    divide(98,0);
    return 0;
}