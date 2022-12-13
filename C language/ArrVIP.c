#include <stdio.h>

int main() {
     int n ;
     scanf("%d",&n);
     printf("Enter no.\n");
     
     int arr[n] , arr1[n+1];
     for(int i=0 ; i<n ; i++){
         scanf("%d",&arr[i]);
     }
     printf("Output\n");
     // Finding greatest no.
     int large = arr[0],i,j;
     for( i=0 ; i<n ;i++){
         if(large<arr[i]){
             large = arr[i];
             j = i;
         }
     }  
     // Finding Second largest no.
     int large2 = arr[0] ;
     for( i=0 ; i<n ; i++){
         if(large>arr[i] && arr[i]>large2){
             large2 = arr[i];
         }
     } 
     
     arr1[j] = large2;
     arr1[j+1] =  large - large2;
     
     // Declare value of 2nd Arr
     for(i=0 ; i < j ; i++){
         arr1[i] = arr[i];
         
     }
     for(i = j+1 ; i< n ; i++){
         arr1[i+1] = arr[i];
     }
     
     for(i=0 ; i<n+1 ; i++){
         printf("%d\t",arr1[i]);
     }
     
     // Shifting element to circular Right
     int t = arr[n-1];
     for( i = n-1 ; i>=1 ; i--){
         arr[i] = arr[i-1];
     }
     arr[0] = t;
     printf("\n");
     for ( i=0 ; i<n ; i++){
         printf("%d\t",arr[i]);
     }
     return 0;
}