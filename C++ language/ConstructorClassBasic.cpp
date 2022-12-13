#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    // Creating a Constructor
    //  constructor is a special member function with same name as of the class.
    //  it is used to initialize the object of its class
    //  It is automatically invoked whenever an object is created

    complex(void); // Constructor decleration   ,, we can define this function here or outside class

    void printNo(void)
    {
        cout << "The Number is : " << a << " + " << b << "i\n";
    }
};

complex ::complex(void) // ---->  this is default constructor as it takes no parameter
{
    a = 10;
    b = 110;
    cout<<"Hello World\n";
}

int main()
{
    complex c1,c2,c3;
    c1.printNo();
    c2.printNo();
    c3.printNo();

    return 0;
}

// Important Characteristics of Constructors in C++

// 1. A constructor should be declared in the public section of the class
// 2. They are automatically invoked whenever the object is created
// 3. They cannot return values and do not have return types
// 4. It can have default arguments
// 5. We cannot refer to their address