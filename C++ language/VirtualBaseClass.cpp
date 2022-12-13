#include <iostream>
using namespace std;

/*
Student ---> Test
Student ---> Sport
Sport ---> Results
Test ---> Results
*/

class Student
{
protected:
    int roll_No;

public:
    void set_no(int a)
    {
        roll_No = a;
    }
    void print_no()
    {
        cout << "Your Roll Number is : " << roll_No << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float x, float y)
    {
        maths = x;
        physics = y;
    }
    void print_marks()
    {
        cout << "Your marks is : \n"
             << "Maths : " << maths << endl
             << "Physics : " << physics << endl;
    }
};

// virtual help in resolving Ambiguity

class Sport : virtual public Student
{ // public virtual ---> can be use like this
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score()
    {
        cout << "Your PT score is :" << score << endl;
    }
};

class Results : public Test, public Sport
{
private:
    float Total;

public:
    void Display()
    {
        Total = maths + physics + score;
        print_no();
        print_marks();
        print_score();
        cout << "Your total score is : " << Total << endl;
    }
};

int main()
{
    Results Shashank;
    Shashank.set_no(12);
    Shashank.set_marks(95, 92);
    Shashank.set_score(9);

    Shashank.Display();
    return 0;
}