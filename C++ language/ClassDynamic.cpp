#include <iostream>
using namespace std;

class BankDeposite
{
    int principle;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposite() {}
    BankDeposite(int p, int y, float r);
    BankDeposite(int p, int y, int R);
    void show();
};
BankDeposite ::BankDeposite(int p, int y, float r)
{
    principle = p;
    years = y;
    interestRate = r;
    returnValue = principle;

    for (int i = 0; i < y; i++)
    {
        returnValue *= (interestRate + 1);
    }
}

BankDeposite ::BankDeposite(int p, int y, int R)
{
    principle = p;
    years = y;
    interestRate = float(R) / 100;
    returnValue = principle;

    for (int i = 0; i < y; i++)
    {
        returnValue *= (interestRate + 1);
    }
}

void BankDeposite ::show()
{
    cout << "Principle amount was " << principle << " . Return Value after "
         << years << " years is : " << returnValue << endl;
}

int main()
{
    BankDeposite c1,c2,c3;
    int p,y,R;
    float r;

    c3.show();

    cout<<"Enter value of p , y and r\n";
    cin>>p>>y>>r;
    c1 = BankDeposite(p,y,r);
    c1.show();

    cout<<"Enter value of p , y and R\n";
    cin>>p>>y>>R;
    c2 = BankDeposite(p,y,R);
    c2.show();

    return 0;
}