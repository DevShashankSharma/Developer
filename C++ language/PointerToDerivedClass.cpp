#include<iostream>
using namespace std;

class BaseClass{
    public :
        int var_base;
        void Display(){
            cout<< "Displaying BaseClass variable var_base : "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass {
    public :
            int var_derived;
            void Display(){
                cout<< "Displaying BaseClass variable var_base : "<<var_base<<endl;
                cout<< "Displaying DerivedClass variable var_derived : "<<var_derived<<endl;
            }
};
                    
int main(){
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_pointer = &obj_derived;//pointing base class pointer to derived class
    base_class_pointer ->var_base = 34;

    // base_class_pointer -> var_derived = 24;//throw error because with base class derived we can only access base class function in derived class
    base_class_pointer ->Display();


    DerivedClass *derived_class_pointer ;
    derived_class_pointer = &obj_derived;
    derived_class_pointer -> var_derived =   134;
    derived_class_pointer -> var_base = 45;
    derived_class_pointer -> Display();      
    return 0;
}