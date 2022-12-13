#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"enter rows : ";
    cin>>n;
    cout<<"enter column : ";
    cin>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    //Hollow Rectangle & Square
    cout<<"Hollow Rectangle & Square\n";
     for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
             if(i==1||i==n||j==1||j==m){
                cout<<"* ";
             }else{
                cout<<"  ";
             }
        }
        cout<<endl;
    }
    return 0;
}