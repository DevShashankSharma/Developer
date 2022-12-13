#include <stdio.h>

 void perfect(int k);
 
 int main(){
     perfect(7);
     return 0;
 }
 
 void perfect(int k){
     int sum = 0;
     for(int i = 1 ; i<k ; i++){
         if(k%i==0){
             sum += i;
         }else{
             continue;
         }
     }
     if(sum == k){
         printf("Perfect Number\n");
     }else{
         printf("Not a Perfect Number");
     }
 }