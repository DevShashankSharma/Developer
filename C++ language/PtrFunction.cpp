#include<iostream>
using namespace std;

void pointer(int *ptr){

    cout<<*ptr<<endl;
}

int main(){
    int n;
    
    cin>>n;
    int *ptr=&n;
    pointer(ptr);
    cout<<*ptr;

    return 0;
}