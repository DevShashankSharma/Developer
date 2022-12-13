#include <iostream>
using namespace std;

class c2;

class c1
{
    int val1;
    friend void swap(c1 &, c2 &);

public:
    void setdata(int a)
    {
        val1 = a;
    }
    void print(void)
    {
        cout << val1 << endl;
    }
};

class c2
{
    int val2;
    friend void swap(c1 &, c2 &);

public:
    void setdata(int b)
    {
        val2 = b;
    }
    void print(void)
    {
        cout << val2 << endl;
    }
};

void swap(c1 &x, c2 &y) // By Reference
{
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int main()
{
    c1 a1;
    a1.setdata(44);
    a1.print();

    c2 a2;
    a2.setdata(55);
    a2.print();

    swap(a1, a2);

    cout << "The value of c1 after exchange is : ";
    a1.print();
    cout << "The value of c2 after exchange is : ";
    a2.print();

    return 0;
}