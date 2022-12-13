#include<iostream>
#include<cmath>
using namespace std;

class SimpleCalculator {
    protected:
    int a,b;
    public :
    void getdataSimple(){
         cout<<"Enter value of a : ";
         cin>>a;
         cout<<"Enter value of b : ";
         cin>>b;
    }
    void PerformOperationSimple(){
        cout<<"Addition : "<<a+b<<endl;
        cout<<"Substraction : "<<a-b<<endl;
        cout<<"Division : "<<a/b<<endl;
        cout<<"Multiplication : "<<a*b<<endl;                 
    }
};
                    
class ScientificCalculator {
    protected:
    int a,b;
    public :
    void getdataScientific(){
        cout<<"Enter value of a : ";
         cin>>a;
         cout<<"Enter value of b : ";
         cin>>b;
    }
    void performScientificOperation(){
        cout<<"The value of cos(a) : "<<cos(a)<<endl;
        cout<<"The value of sin(a) : "<<sin(a)<<endl;
        cout<<"The value of exp(a) : "<<exp(a)<<endl;
        cout<<"The value of tan(a) : "<<tan(a)<<endl;                 
    }
};

class HybridCalculator : public ScientificCalculator , public SimpleCalculator {

};
                    
int main(){
    HybridCalculator o1;
    o1.getdataSimple();
    o1.PerformOperationSimple();

    o1.getdataScientific();
    o1.performScientificOperation();

    return 0;
}