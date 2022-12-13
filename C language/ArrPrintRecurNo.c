 #include <stdio.h>

 void print(int arr[] , int n);
//  OR void print(int *arr , int n);
 int main(){
     int arr[] = {1,2,3};
     print(arr,0);
     return 0;
 }
 
 void print(int arr[],int n){
     if(n>2){
         return;
     }
     printf("%d\n",arr[n]);
     n++;
     print(arr,n);
 }