#include <stdio.h>

int main() {
    int n=10,no;
    int arr[n];
    int *ptr = arr;
    
    for(int i=0 ; i<n ; i++){
        scanf("%d",&no);
        *ptr = no;
        *ptr++;
    }
    for(int i=0 ; i<n ; i++){
        printf("arr[%d] is : %d\n",i,arr[i]);
    }
    return 0;
}


// print no by declare
// #include <stdio.h>

// int main() {
//      int arr[2][2]={{1,2},{3,4}};
//      for(int i=0;i<2;i++){
//          for(int j=0 ; j<2 ; j++){
//              printf("%d\n",arr[i][j]);
//          }
//      }
//     return 0;
// }



// same from end and start

// #include <stdio.h>

// int main() {
//     int n=10,count=0;
//     int arr[n];
     
//     for(int i=0 ; i<n ; i++){
//         scanf("%d",&arr[i]);
//     } 
//      for(int i=0;i<n/2;i++){
//           if(arr[i]==arr[n-i-1]){
//             count++;
//           } 
//      }
//      if(count==n/2){
//           printf("Same\n");
//      }else{
//           printf("Not Same\n");
//      }
//     return 0;
// }