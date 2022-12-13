#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex()
    {
        a = 0;
        b = 3;
    }
    complex(int x)
    {
        a = x;
        b = 3;
    }
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    void printNo()
    {
        cout << "The number is : " << a << " + " << b << "i\n";
    }
};

int main()
{
    complex c1;
    c1.printNo();

    complex c2(7);
    c2.printNo();

    complex c3(9, 5);
    c3.printNo();

    return 0;
}