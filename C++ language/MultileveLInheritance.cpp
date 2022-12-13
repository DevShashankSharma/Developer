#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_No;

public:
    void setroll_No(int);
    void getroll_No(void);
};

void Student ::setroll_No(int r)
{
    roll_No = r;
}

void Student ::getroll_No()
{
    cout << "The Roll Number is : " << roll_No << endl;
}

class Exam : public Student
{
protected:
    float Math;
    float physic;

public:
    void setMarks(float, float);
    void getMarks();
};

void Exam ::setMarks(float m1, float p1)
{
    Math = m1;
    physic = p1;
}

void Exam ::getMarks()
{
    cout << "The marks obtained in math are :" << Math << endl;
    cout << "The marks obtained in physic are :" << physic << endl;
}

class Results : public Exam
{
    float percentage;
    //  percentage = (Math + physic) / 2; error generate as we can not have any student object here

public:
    void Display()
    {
        percentage = (Math + physic) / 2;
        getroll_No();
        getMarks();
        cout << "Your results is : " << percentage << "%\n";
    }
};

int main()
{
    /*
    If we are Inheriting B from A and C from B [A ---> B ---> C] :
    1.A is Base class for B and B is Base class for C .
    2.A ---> B ---> C is called Inheritance Path .
    */

    Results Shashank;
    Shashank.setroll_No(111);
    Shashank.setMarks(93, 92);

    Shashank.Display();

    return 0;
}