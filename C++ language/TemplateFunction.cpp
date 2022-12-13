#include<iostream>
using namespace std;

template <class t1 , class  t2>
 
float funcAverage(t1 a,t2 b){
    float avg = (a+b)/2.0;
    return avg;
}
// float funcAverage(int a,int b){
//     float avg = (a+b)/2.0;
//     return avg;
// }

template < class T >
void Swap(T &a , T &b){
    T temp = a;
    a = b;
    b = temp;
}
                    
int main(){
    float a;
    // a = funcAverage(2,5);

    a = funcAverage<int , int > (3,4);
    cout <<"Average of number is : "<<a<<endl;  

    int x = 4, y = 3;
    Swap(x,y);
    cout <<x<<endl<<y<<endl;
    return 0;
}