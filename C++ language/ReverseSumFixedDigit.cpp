#include<iostream>
using namespace std;

int main(){
    //Sum of First and Second last Term
    int x=12345;
    int a=x/10000;
    int temp=x%100;
    int b=temp/10;

    cout<<"Sum of 1st and 2nd last term is : "<<a+b<<endl;

    // Increasing each digit by 2
    
    int no = 9999;
    int i =(no/1000+2)%10;
    no%=1000;
    int j =( no/100+2)%10;
    no%=100;
    int k = (no/10+2)%10;
    no%=10;
    int l = (no+2)%10;

    cout<<l*1000+k*100+j*10+i<<endl;

    return 0;
}