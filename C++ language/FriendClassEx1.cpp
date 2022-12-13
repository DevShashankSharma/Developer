#include <iostream>
using namespace std;

class y;

class x
{
    int data;

public:
    void setvalue(int value)
    {
        data = value;
    }
    friend void sum(x, y);
};

class y
{
    int data;

public:
    void setvalue(int value)
    {
        data = value;
    }
    friend void sum(x, y);
};

void sum(x o1, y o2)
{
    cout << "The addition of data of class x and y is : " << o1.data + o2.data << endl;
}

int main()
{
    x a1;
    a1.setvalue(4);

    y b1;
    b1.setvalue(44);

    sum(a1, b1);

    return 0;
}