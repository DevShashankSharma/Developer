#include <iostream>
using namespace std;

// Syntax of Inheriting in Multiple inheritance
// class DerivedC : visibility-Mode Base1 , visibility-mode  base2{
//     // cass body of class "DerivedC"
// };

class Base1
{
protected:
    int base1_int;

public:
    void setbase1_int(int a)
    {
        base1_int = a;
    }
};

class Base2
{
protected:
    int base2_int;

public:
    void setbase2_int(int b)
    {
        base2_int = b;
    }
};

class Base3
{
protected:
    int base3_int;

public:
    void setbase3_int(int b)
    {
        base3_int = b;
    }
};

class Derived : public Base1, public Base2, public Base3
{
public:
    void show(void)
    {
        cout << "The value of base1 is : " << base1_int << endl;
        cout << "The value of base2 is : " << base2_int << endl;
        cout << "The value of base3 is : " << base3_int << endl;
        cout << "The sum of these value is : " << base1_int + base2_int + base3_int << endl;
    }
};
/*
The inherited Derived class will look something like this :
   Data members:
         base1int ---> protected
         base2int ---> protected
   Member function :
         set_base1int() ---> public
         set_base2int() ---> public
         show() ---> public
*/

int main()
{
    Derived Shashank;
    Shashank.setbase1_int(33);
    Shashank.setbase2_int(24);
    Shashank.setbase3_int(15);
    Shashank.show();
    return 0;
}