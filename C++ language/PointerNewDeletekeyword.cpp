#include<iostream>
using namespace std;
                    
int main(){
    //Basic example
    int a = 4;
    int* ptr = &a;
    cout<<"The value of a is : "<<*(ptr)<<endl;

    //New keyword
    // int* p = new int(40);
    float* p = new float(40.34);
    cout<<"The value at adress p is : "<<*(p)<<endl;

    int* arr = new int[3];
    arr[0] = 12;
    arr[1] = 13;  // (arr+1)=arr[1]
    arr[2] = 14;
    // delete[] arr;
    cout<<"The value of arr[0] is : "<<arr[0]<<endl;
    cout<<"The value of arr[1] is : "<<arr[1]<<endl;
    cout<<"The value of arr[2] is : "<<arr[2]<<endl;

    //Delete keyword

            
    return 0;
}