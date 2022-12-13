#include<iostream>
using namespace std;

int main(){
    int r1,r2,c1,c2;
    
    cout<<"Enter Row and Column for Matrix 1 using space \n";
    cin>>r1>>c1;
   
    cout<<"Enter Row and Column for Matrix 2 using space \n";
    cin>>r2>>c2;
    
    int m1[r1][c1] , m2[r2][c2];
    int r[r1][c2];
   

    if(r2!=c1){
        return 0;
    }
    
    for(int i=0 ; i<r1 ; i++){
        for(int j=0; j<c1 ; j++){
            cin>>m1[i][j]; 
        
        }
    }
    
    for(int i=0 ; i<r2 ; i++){
        for(int j=0; j<c2 ; j++){
            cin>>m2[i][j];
        }
    }

    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int k=0;k<c1;k++){
                r[i][j] += m1[i][k]*m2[k][j];
            }
        }
    }
    
    for(int i=0 ; i<r1 ; i++){
        for(int j=0; j<c2 ; j++){
            cout<<r[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
    
}