#include<iostream>
using namespace std;

int main(){
    int length,breadth;

    cout<<"Enter length\n";
    cin>>length;
    cout<<"Enter breadth\n";
    cin>>breadth;

    if(length==breadth){
        cout<<"It is Square\n";
    }else{
        cout<<"It is Rectangle\n";
    }


    //Discount 

    int quantity;
    
    cout<<"Enter quantity\n";
    cin>>quantity;

    int amount=100*quantity;

    if(amount>1000){
        cout<<"Final Price : "<<amount-(amount/10)<<endl;
    }else{
        cout<<"Final price : "<<amount<<endl;
    }

    return 0;
}