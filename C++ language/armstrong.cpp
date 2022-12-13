#include<iostream>
using namespace std;
#include<math.h>

int main(){
    
    
    for(int i=0; i<=500 ;i++){
        int a,no=i,j;
        double sum=0;
        
        //Counting no. of digit
        for(j=1 ; no/10 != 0 ; j++ ){
            no=no/10; 
        } 

         
        for(no=i ; no != 0 ;no/=10 ){
            a=no%10;
             
            sum+=pow(a,j);
        }
        no=i;
        if(sum==no){
            cout<<no<<" is a Armstrong Number\n";
        }

    }
    return 0;
}