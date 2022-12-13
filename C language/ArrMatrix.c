#include<stdio.h>

int main() {
     int n ,  cout=0 ;
     scanf("%d",&n);
     int arr[n][n] , arr1[n][n] ;
     
     // Taking input of element of matrix
     for(int i=0 ; i<n ; i++){
         for(int j=0 ; j<n ; j++){
             scanf("%d",&arr[i][j]);
         }
     }
      for(int i=0 ; i<n ; i++){
         for(int j=0 ; j<n ; j++){
             scanf("%d",&arr1[i][j]);
         }
     }
     
     //output of matrix
     for(int i=0 ; i<n ; i++){
         for(int j=0 ; j<n ; j++){
             printf("%d\t",arr[i][j]);
         }
         printf("\n");
     }
     
     //Checking is matrix symmetric or not
     for(int i=0 ; i<n ; i++){
         for(int j=0 ; j<n ; j++){
              if(arr[i][j] == arr[j][i]){
                  cout++;
              }
         }
     }
         if(cout== n*n){
             printf("Symmetric Matrix\n");
         }else{
             printf("Non-Symmetric Matrix\n");
         }
        // Addition of Matrix
          int arrAdd[n][n];
         for(int i=0 ; i<n ; i++){
         for(int j=0 ; j<n ; j++){
             printf("%d\t",arrAdd[i][j] = arr[i][j] + arr1[i][j] );
         }
         printf("\n");
     } 

      
     
    return 0;
}