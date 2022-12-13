#include<iostream>
using namespace std;

int main(){
    int year;

    cout<<"Enter Year\n";
    cin>>year;

    if(year%100==0){
        if(year%400==0){
            cout<<"Leap Year\n";
        }
    }else if(year%4==0){
        cout<<"Leap Year\n";
    }else{
        cout<<"Normal Year\n";
    }

    return 0;
}