#include <iostream>
using namespace std;

class employee
{
    int id;
    int salary;

public:
    void setid(void)
    {
        cout << "Enter id of employee \n";
        cin >> id;
        salary = 1200;
    }
    void getid(void)
    {
        cout << "The id of employee is : " << id << endl;
        cout << "The salary : " << salary << endl;
    }
};

int main()
{
    employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setid();
        fb[i].getid();
    }

    return 0;
}