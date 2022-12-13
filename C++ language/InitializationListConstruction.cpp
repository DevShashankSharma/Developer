#include <iostream>
using namespace std;

/*
Syntax for initialization list in Constructor
constructor (argument-list) : initialization section {
    assingnment + other code;
}
*/
class Test
{
    int a;
    int b;

public:
    // Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(i+j)
    Test(int i, int j) : a(i), b(2 * j)
    // Test(int i, int j) :  b(j) , a(b+i)  ---> Red Flag this will create problem because a will initialize first as a is declared before b

    {
        cout << "Contructed executed\n";
        cout << "The value of a is : " << a << endl;
        cout << "The value of b is : " << b << endl;
    }
};
int main()
{
    Test t(4, 6);
    return 0;
}