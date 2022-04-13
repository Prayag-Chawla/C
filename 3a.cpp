#include <iostream>
#include <string>
#include <vector>

using std::cout; using std::endl;
using std::vector; using std::string;

class CustomString {
public:
    explicit CustomString(const string &s = string()):
            str(new string(s)) { }

    CustomString(const CustomString &p):
            str(new string(*p.str)) { }

    ~CustomString() { delete str; }

    string & getString() { return *str; };
private:
    string *str;
};

int main()
{
    CustomString str1("Not everyone in this world has got a halo");
    CustomString str2(str1);

    cout << "str1: " << str1.getString() << endl;
    cout << "str2: " << str2.getString() << endl << endl;

}