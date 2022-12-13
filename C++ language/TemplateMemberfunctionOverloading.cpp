#include<iostream>
using namespace std;

template <class T>
class Shashank{
    public : 
        T data;
        Shashank(T a){
            data = a;
        }
        void Display ();
};

template <class T>
void Shashank<T> :: Display(){
    cout<<data<<endl;
}

void func(int a){
    cout<<"I am first function () : "<<a<<endl;
}

template <class t>
void func(t a){
    cout<<"I am templatised function () : "<<a<<endl;
}
                    
int main(){
    // Shashank <int> o1(4);
    // Shashank <float> o2(3.45);
    // Shashank <char> o3('s');

    // o1.Display();
    // o2.Display();
    // o3.Display();

    // cout << o1.data<<endl; 

    func(3); //exact match takes the highest priority
    func('s');
    func(3.33);       
    return 0;
}