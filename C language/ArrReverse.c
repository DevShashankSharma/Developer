#include <stdio.h>

void Reverse(int *arr,int n);

 int main(){
     int arr[10],x;
     for(int i=0;i<10;i++){
         scanf("%d",&arr[i]);
     }
     
     // sum average
     int sum=0;
     for(int i=0;i<10;i++){
        sum += arr[i]; 
     }
     printf("Sum : %d\n",sum);
     printf("Average : %f\n",sum/10.0);
     
     //Product
     int prod =1;
     for(int i=0;i<10;i++){
         prod *= arr[i];
     }
     printf("Product : %d\n",prod);
     
     //Smallest Greatest
     int small=arr[0],large = arr[0];
     for(int i=0;i<10;i++){
         if(arr[i]>large){
             large=arr[i];
         }
     }   printf("Largest no. : %d\n",large);
     
     for(int i=0;i<10;i++){    
          if(small>arr[i]){
             small=arr[i];
         }
     }    printf("Smallest no. : %d\n",small);
     
     
     // reverse
     Reverse(arr,10);
     for(int i=0;i<10;i++){
        printf("%d\n",arr[i]);
     }
    
     return 0;
 }
 
 void Reverse(int *arr, int n){
     for(int i=0;i<n/2;i++){
         int x=arr[i];
         arr[i]=arr[n-i-1];
         arr[n-i-1]=x;
     }
 }