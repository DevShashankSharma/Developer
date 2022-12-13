#include <stdio.h>

int main() {
    int n=10,count=0;
    int arr[n];
    int arr1[5];
    int arr2[5];
     
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    } 
    
    for(int i=0;i<5;i++){
        arr1[i]=arr[i];
        arr2[i]=arr[i+5];
    } 
    for(int i=0;i<5;i++){
    printf("%d ",arr1[i]);
    }
    printf("\n");
    for(int i=0;i<5;i++){
    printf("%d\t",arr2[i]);
    }
    return 0;
}