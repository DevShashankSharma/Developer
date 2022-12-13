#include<iostream>
using namespace std;

int main(){
    for(int i=1 ; i<=100 ; i++){
        int count=0;
        for(int j=2 ; j<i ; j++){
            if(i%j==0){
                count++;
            } 
        }
        if(count==0&&i!=1){
            cout<<i<<"\t ";
        }
    }
    return 0;
}