#include <stdio.h>

 void prime(int k);
 
 int main(){
    prime(22);
    return 0;
 }
 
 void prime(int k){
     for(int i=2; i<=k&&i>1 ; i++){
        if(k%i==0){
             
            printf("%d\n ",i);
            prime(k/i);
        }else{
            continue;
        } return;
     }
 }