#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    int *ptr=&a;

    cout<<a<<" "<<ptr<<" "<<&ptr<<" "<<*ptr;
    return 0;
}