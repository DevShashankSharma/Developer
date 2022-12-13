#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    int n; 

    printf("Enter how many space you want to allocate\n");
    scanf("%d",&n);

    ptr=(int *)calloc(n,sizeof(int));

    for(int i=0 ; i<n ; i++){
    printf("Number %d = %d\n",i+1,ptr[i]);
   }

   for(int i=0 ; i<n ; i++){
    scanf("%d",&ptr[i]);
   }
   for(int i=0 ; i<n ; i++){
    printf("Number %d = %d\n",i+1,ptr[i]);
   }
   return 0;
}