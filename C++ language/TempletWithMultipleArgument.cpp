#include<iostream>
using namespace std;
/*
CLASS TEMPLET WITH MUTIPLE (COMMA SEPERATED) PARAMETER (ONE , TWO , OR MORE THAN TWO)
template <class c1 , class c2>
class nameofclass{
    //class body
};
*/

template<class t1,class t2>
class myclass{
    public:
        t1 data1;
        t2 data2;
        myclass(t1 a , t2 b){
            data1 = a;
            data2 = b;
        }
        void Display(){
            cout<<this->data1<<endl<<this->data2<<endl;
        }
};

int main(){
    myclass<int , char>c1(3,'a');  // we can also supply class
    c1.Display();

    return 0;
}