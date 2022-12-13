#include <iostream>
using namespace std;

class Base
{
protected:
    int a = 10;

private:
    int b;
};

/*
for a protected member :
                            Public derivation       Protected derivation        Private derivation
    1.Private member          Not Inherited           Not Inherited               Not Inherited
    2.Protected member        Protected               Protected                   Private
    3.Public member           Public                  Protected                   Private
*/
class Derived : protected Base
{
public:
    void Display()
    {
        cout << "The value of a is : " << a << endl;
    }
};

int main()
{
    // Base b;

    Derived d;
    d.Display();

    // cout<<d.a<<endl;    will not work as 'a' is Protected member in both in Base as well as in Derived Class

    return 0;
}