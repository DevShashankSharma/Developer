#include<iostream>
using namespace std;

int main(){
    int nom,denom;

    cout<<"Enter Nominator\n";
    cin>>nom;
    
    cout<<"Enter Denominator\n";
    cin>>denom;

    cout<<"Given Fraction : "<<nom<<"/"<<denom<<endl;

    for(int i=1 ; i<=nom ; i++){
        if(nom%i==0&&denom%i==0){
            nom /=i;
            denom /=i;
        }
    }
    cout<<"Simplest Fraction : "<<nom<<"/"<<denom<<endl;

    return 0;
}