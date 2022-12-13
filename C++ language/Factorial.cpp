#include<iostream>
using namespace std;

int main(){
    int no;
    cout<<"Enter No.";
    cin>>no;

    int fact=1;
    switch(no){
        case 0 : cout<<"1";
              break;
        default : for(int i=no; i>0 ; i--){
                  fact *=i;
                 }

                 cout<<fact;
    }
    return 0;

}