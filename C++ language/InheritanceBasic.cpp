#include <iostream>
using namespace std;

class Employee
{
public:
    int id;
    float salary;

    Employee() {}
    Employee(int inpId)
    {
        id = inpId;
        salary = 43.0;
    }
};

// Derived class Syntax
/*
class {{derived-class name}} : {{visibility mode}} {{Base class}} {
   // class method/member etc..
};
Note :
1.Default Visibility mode is Private
2.Public Visibility mode : Public member of Base class becomes Public member of the Derived class
3.Private Visibility mode : Public member of Base class becomes Private member of the Derived class
4.Private member are never inherited
*/

// Creating a Programmer class derived from Employee base class
class Programmer :  Employee
{
public:
    Programmer(int inpId)
    {
        id = inpId;
    }
    int languageCode = 10;
    void getdata()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee E1(1001), E2(1002);
    cout << E1.salary << endl;
    cout << E2.salary << endl;

    Programmer P1(1003);
    cout << P1.languageCode << endl;
    // cout << P1.id << endl; throw errow as id is private
    P1.getdata();

    return 0;
}