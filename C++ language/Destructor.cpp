#include <iostream>
using namespace std;

int count = 0;

// Destructor never take an argument nor does return any value

class num
{
public:
    num()
    {
        count++;
        cout << "This is the time when Constructor is called for object number " << count << endl;
    }
    ~num()
    {
        cout << "This is the time when my Destructor is called for object number " << count << endl;
        count--;
    }
};

int main()
{
    cout << "We are inside our main function\n";
    cout << "Creating first object n1\n";

    num n1;

    {
        cout << "Entering this block\n";
        cout << "Creating two more object\n";

        num n2, n3;

        cout << "Existing this block\n";
    }
    
    cout << "Back to main function\n";
    return 0;
}