#include<stdio.h>
 
 int factorial(int *k);
 
 int main(){
     int k = 4;
     printf("Factorial of %d is : %d",k,factorial(&k));
     return 0;
 }
 
 int factorial(int *k){
     int x = *k;
     if(x==0){
         return 1;
     }
     int y = x-1;
     int factxm1 = factorial(&y);
     int factx=factxm1 * x;
     return factx;
 }