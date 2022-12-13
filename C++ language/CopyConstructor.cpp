#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }
    Number(int x)
    {
        a = x;
    }
    Number(Number &obj)
    {
        cout << "Copy Constructor is called !!!! \n";
        a = obj.a;
    }
    void Display()
    {
        cout << "The Number for this object is : " << a << endl;
    }
};
int main()
{
    Number x, y, z(55), z2;
    x.Display();
    y.Display();
    z.Display();

    // z1 should exactly ressemble z
    Number z1(z); // Copy Constructor invoked
    z1.Display();

    z2 = x; // Copy Constructor not called
    z2.Display();

    Number z3 = z; // Copy Constructor invoked
    z3.Display();

    return 0;
}