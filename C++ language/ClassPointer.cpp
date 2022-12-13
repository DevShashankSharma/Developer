#include<iostream>
using namespace std;

class Complex {
    int real , imaginary;
    public:
    void setdata(int a , int b){
        real = a;
        imaginary = b;
    }
    void getdata(){
        cout<<"The Real part of complex no. is : "<<real<<endl;
        cout<<"The imaginary part of complex no. is : "<<imaginary<<endl;
    }
};
                    
int main(){
    // Complex o;
    // o.setdata(3,4);
    // o.getdata();

    // Complex *ptr = &o;
    // (*ptr).setdata(3,4);
    // (*ptr).getdata();

    // Complex *ptr = new Complex;
    // // (*ptr).setdata(3,4); is exactly same as
    // ptr->setdata(3,4);

    // // (*ptr).getdata(); is as good as
    // ptr->getdata();

    
    // Array of object
    Complex *ptr1 = new Complex[4];
    ptr1->setdata(3,4);
    ptr1->getdata();
            
    return 0;
}