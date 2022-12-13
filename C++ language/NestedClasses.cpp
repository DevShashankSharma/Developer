#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s; // it is Private by default
    void chk_binary(void);

public:
    void read(void);
    void ones_complement(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter Binary No. \n";
    cin >> s;
}

void binary ::chk_binary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format\n";
            exit(0);
        }
    }
}

void binary ::ones_complement(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display(void)
{
    chk_binary(); // this is nesting of member function
    cout << "Binary No : \n";
    cout << s << endl;
}

int main()
{
    binary b;
    b.read();
    // b.chk_binary(); this is private function
    b.display();
    b.ones_complement();
    b.display();
    return 0;
}

/*class Employee{
            // Class definition
} harry, rohan, lovish;*/