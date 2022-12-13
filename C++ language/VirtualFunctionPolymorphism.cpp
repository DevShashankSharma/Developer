#include<iostream>
using namespace std;

class BaseClass{
    public :
        int var_base=12;
        virtual void Display(){
            cout<< "1 Displaying BaseClass variable var_base : "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass {
    public :
            int var_derived=44;
            void Display(){
                cout<< "2 Displaying BaseClass variable var_base : "<<var_base<<endl;
                cout<< "2 Displaying DerivedClass variable var_derived : "<<var_derived<<endl;
            }
};
                    
                    
int main(){
    BaseClass* base_class_pointer ;
    BaseClass Obj_base;
    DerivedClass Obj_derived;

    base_class_pointer = &Obj_derived;
    base_class_pointer -> Display();      
    return 0;
}