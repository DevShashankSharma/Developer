#include <iostream>
#include <cmath>
using namespace std;

class point
{
    int x, y;
    friend void distance(point, point);

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void Display()
    {
        cout << "The Point is :  (" << x << "," << y << ")\n";
    }
};

void distance(point o1, point o2)
{
    cout << "The distance between points is : " << sqrt(pow(o1.x - o2.x, 2) + pow(o1.y - o2.y, 2));
}

int main()
{
    point c1(1, 0);
    c1.Display();

    point c2(70, 0);
    c2.Display();

    distance(c1, c2);

    return 0;
}