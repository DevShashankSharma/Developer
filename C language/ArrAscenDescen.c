#include<stdio.h>
 
 int main(){
     int n,no,pos;
     scanf("%d",&n);
     int arr[n];
     
     for(int i=0;i<n;i++){
         scanf("%d",&arr[i]);
     }
     
     // Ascending order
     
     for(int i=0 ; i<n ; i++){
         for(int j=0 ;j<n-1 ; j++){
             if(arr[j]>arr[j+1]){
                 int temp;
                 temp = arr[j];
                 arr[j]=arr[j+1];
                 arr[j+1]=temp;
             }
         }
     }
     printf("Ascending order :  ");
      for(int i=0;i<n;i++){
         printf(" %d\t",arr[i]);
     }
     
     //Descendig order
     
     for(int i=0 ; i<n ; i++){
         for(int j=0 ;j<n-1 ; j++){
             if(arr[j]<arr[j+1]){
                 int temp;
                 temp = arr[j];
                 arr[j]=arr[j+1];
                 arr[j+1]=temp;
             }
         }
     }
      printf("Descending order :  ");
      for(int i=0;i<n;i++){
         printf(" %d\t",arr[i]);
     }

      /*Accept element which want to delet*/
       printf("\nEnter which element you want to delet:\n");
       scanf("%d",&no);

      /*Accept position of element*/
      printf("Enter the position:\n");
      scanf("%d",&pos);

     /*logic to delet element*/
      for(int i=pos-1;i<=n;i++) {
           arr[i]=arr[i+1];
         }
     /*print elements after deleting*/
       printf("After deleting, array elements are:\n");
      for(int i=0;i<n-1;i++){
           printf("%d ",arr[i]);
        }
        
     return 0;
 }   