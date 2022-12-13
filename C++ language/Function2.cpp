#include<iostream>
#include<math.h>
using namespace std;

bool prime(int n){
    for(int i=2 ; i<=sqrt(n); i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int fact(int n){
    int fact=1;
    for(int i=1 ; i<=n ; i++){
        fact *=i;
    }
    return fact;
}

int main(){
    int n;

    cin>>n;
    cout<<prime(n)<<endl;
    cout<<n<<"! : "<<fact(n)<<endl;

    return 0;
}