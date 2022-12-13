#include <iostream>
using namespace std;

// Forward Declaration
class Complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealcomplex(Complex, Complex);
    int sumCompcomplex(Complex, Complex);
};

class Complex
{
    int a, b;

    // Individually declaring function as friends
    // friend int calculator ::sumRealcomplex(Complex, Complex);
    // friend int calculator ::sumCompcomplex(Complex, Complex);
    

    // Aliter : Declaring the entire Calculator class as friend
    friend class calculator;

public:
    void setNo(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void printNumber()
    {
        cout << "Your Number is " << a << " + " << b << "i" << endl;
    }
};
int calculator ::sumRealcomplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int calculator ::sumCompcomplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex o1, o2;
    o1.setNo(1, 4);
    o2.setNo(5, 7);

    calculator cal;
    int res = cal.sumRealcomplex(o1, o2);
    cout << "The sum of real part of Complex No. is : " << res << endl;
    return 0;
}