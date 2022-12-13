#include <iostream>
using namespace std;

/*
Case 1:
class B : public A {
    //oder of execution of constructor -->firstly A then B
};

Case 2:
class A : public B , public C {
    //oder of execution of constructor -->firstly B() then C() then A()
};

Case 3:
class A : public C , public B {
    //oder of execution of constructor -->firstly C() then B() then A()
};

Case 3:
class A : public B , virtual public C {
    //oder of execution of constructor -->firstly C() then B() then A()
};

*/

class Base1
{
    int data1;

public:
    Base1(int x)
    {
        data1 = x;
        cout << "Base 1 class constructor called \n";
    }
    void printdatabase1()
    {
        cout << "The value of data1 is : " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int x)
    {
        data2 = x;
        cout << "Base 2 class constructor called \n";
    }
    void printdatabase2()
    {
        cout << "The value of data1 is : " << data2 << endl;
    }
};

class Derived : public Base1, public Base2
{
    int derieved1, derieved2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {                  // if we replace base1 base2 position then execution
        derieved1 = c; // of constructor will not change
        derieved2 = d;
        cout << "Derived class constructor called \n";
    }
    void printDataderieved(void)
    {
        cout << "The value of derieved1 is : " << derieved1 << endl;
        cout << "The value of derieved2 is : " << derieved2 << endl;
    }
};

int main()
{
    Derived Shashank(1, 2, 3, 4);
    Shashank.printdatabase1();
    Shashank.printdatabase2();
    Shashank.printDataderieved();
    return 0;
}
// refer notes ---> imp