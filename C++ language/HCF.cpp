#include<iostream>
using namespace std;

int main(){
    int a,b,temp;

    cout<<"Enter no with space\n";
    cin>>a>>b;

    if(a>b){
        if(a%b==0){
            cout<<"HCF : "<<b<<endl;
        }else{
            while(a%b!=0){
                temp=a%b;
                a=b;
                b=temp;
            }
            cout<<"HCF : "<<temp<<endl;
        }
    }else{
         if(b%a==0){
            cout<<"HCF : "<<a<<endl;
        }else{
            while(b%a!=0){
                temp=b%a;
                b=a;
                a=temp;
            }
            cout<<"HCF : "<<temp<<endl;
        }
    }
    return 0;
}