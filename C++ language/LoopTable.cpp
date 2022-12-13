#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter No.\n";
    cin>>n;

    for(int i=1 ; i<=10 ; i++){
        cout<<n<<" * "<<i<<"\t=  "<<n*i<<endl;
    }

    // //Print Character with ASCII Value
    // cout<<"ASCII Value        Character\n";
    // for(int i=1 ; i<=255 ; i++){
    //    cout<<"  "<< i<<"                 " <<char(i)<<"\n";
    // }


    

    return 0;
}