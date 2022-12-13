#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int, int);
    //---> can be declare like this
    // complex(int x, int y);

    void printNo(void)
    {
        cout << "The Number is : " << a << " + " << b << "i\n";
    }
};

complex ::complex(int x, int y) // ---->  this is parameterized constructor as it takes parameter
{
    a = x;
    b = y;
}

int main()
{
    // Implicit call
    complex a(3, 4);
    a.printNo();

    // Explicit call
    complex b = complex(33, 45);
    b.printNo();

    return 0;
}