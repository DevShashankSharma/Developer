#include<iostream>
using namespace std;

int main(){
    int n,prod=1;

    cout<<"Enter No.\n";
    cin>>n; 

    cout<<n<<"! = ";

    for(int i=n ; i>0 ; i--){
        if(i<n){
            cout<<"*";
        }
        cout<<i; 

        prod*=i;
    }
    cout<<" = "<<prod;

    return 0;
}