 #include<stdio.h>
 
 int power(int k,int x);
 
 int main(){
     printf("%d",power(33,4));
     return 0;
 }
 
 int power(int k,int x){
     int value = 1;
     if(x==1){
         value = k;
     }
     for(int i =1; i<=x; i++){
         value *=k;
     }
     return value;
 }