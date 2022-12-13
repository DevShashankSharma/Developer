#include<iostream>
using namespace std;

template <class t1, class t2>
class no1{
    public :
        t1 a;
        int b;
        no1(t1 i,t2 j ){
            a = i;
            b = j.e;
        }
        void display(){
            cout << "Sum is : "<<a+b<<endl;
        }
};
class no2{
    public :
        int e;
        no2(int x){
            e = x;
        }

};
int main(){
    no2 q(4);
    no1<int ,  class no2> p ( 5 , q);

    p.display();
    return 0;
}