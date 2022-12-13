#include <iostream>
using namespace std;

class simple
{
    int data1;
    int data2;
    int data3;

public:
    simple(int a, int b = 9, int c = 5)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void display();
};

void simple ::display()
{
    cout << "The value of data is " << data1 << " , " << data2 << " and " << data3 << endl;
}

int main()
{
    simple c1(2);
    c1.display();

    simple c2(2, 3);
    c2.display();

    simple c3(2, 3, 4);
    c3.display();

    return 0;
}