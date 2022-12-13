#include<iostream>
using namespace std;

template <class T>
class Vector {
    public :
        T *arr;
        int size;
        Vector(int m){
            size = m;
            arr = new T[size];
        }

        T dotproduct(Vector &v){      //can be written as "int dotproduct (vector v){"
            T d=0;
            for(int i=0; i<size ; i++){
                d += this->arr[i] * v.arr[i];
            }
            return d;
        }
};
                    
int main(){
    Vector <int> v1(3);
    v1.arr[0]=4;
    v1.arr[1]=5;
    v1.arr[2]=7;

    Vector <int> v2(3);
    v2.arr[0]=2;
    v2.arr[1]=0;
    v2.arr[2]=1;
    
    int d = v1.dotproduct(v2);
    cout <<"Dot product is : "<<d<<endl;

    Vector <float> v3(3);
    v3.arr[0]=4.1;
    v3.arr[1]=5.23;
    v3.arr[2]=7.5;

    Vector <float> v4(3);
    v4.arr[0]=2.005;
    v4.arr[1]=0.6;
    v4.arr[2]=1.34;
    
    float f = v3.dotproduct(v4);
    cout <<"Dot product is : "<<f<<endl;
     
    return 0;
}