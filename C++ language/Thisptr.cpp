#include<iostream>
using namespace std;

class A {
    int a;
    public :
        //1.
        void setdata1(int a){
            this->a = a;
        }
        A & setdata(int a){
            this->a = a;
            return *this;
        }

        void getdata(){
            cout<<"The value of a is : "<<a<<endl;
        }
};

// this is a keyword which is a pointer which points to the object which invoked member function

int main(){
    A a;
    a.setdata1(4);
    a.getdata();  

    a.setdata(4).getdata();

    return 0;
}