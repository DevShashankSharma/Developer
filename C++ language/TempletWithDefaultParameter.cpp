#include<iostream>
using namespace std;

template <class t1 = int , class t2 = float , class t3 = char >
class Shashank{
    t1 a;
    t2 b;
    t3 c;
    public :
        Shashank(t1 x , t2 y , t3 z ){
            a = x;
            b = y;
            c = z;
        }
        void Display(){
            cout << "The value of a is : "<<a<<endl;
            cout << "The value of b is : "<<b<<endl;
            cout << "The value of c is : "<<c<<endl;            
        }
};
                    
int main(){
    Shashank <> o1(3,4.4,'g');
    o1.Display();

    Shashank <float , char , char > o2(3.4,'h','g');
    o2.Display();

    return 0;
}