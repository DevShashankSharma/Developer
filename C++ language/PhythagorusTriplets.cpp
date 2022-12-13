#include<iostream>
using namespace std;

void phythotriplets(int a, int b , int c){
     int i=max(a,max(b,c));
     if(i==a){
        if(i*i==(b*b+c*c)){
            cout<<"Phythagorus Triplets\n";
        }
     }else if(i==b){
        if(i*i==(a*a+c*c)){
            cout<<"Phythagorus Triplets\n";
        }
     }else{
        if(i*i==(b*b+a*a)){
            cout<<"Phythagorus Triplets\n";
        }
       }
}

 int main(){
    int a,b,c;

    cin>>a>>b>>c;

    phythotriplets(a,b,c);

    return 0 ;
 }