#include<stdio.h>
 
 void print(int *a,int *b,int *c);
 
 int main(){
     int x,y,z;
     printf("Enter  No. \n");
     scanf("%d%d%d",&x,&y,&z);
     print(&x,&y,&z);
     return 0;
 }
 
 void print(int *a,int *b,int *c){
     if(*a>*b){
         if(*b>*c){
             printf("Min. : %d\n",*c);
              printf("Max. : %d",*a);
         }else if(*a>*c){
              printf("Min. : %d\n",*b);
              printf("Max. : %d\n",*a);
         }else{
              printf("Max. : %d",*c);
              printf("Min. : %d",*b);
         }
     }else if(*a>*c){
             printf("Min. : %d\n",*c);
             printf("Max. : %d",*b);
         }else if(*b>*c){
              printf("Min. : %d\n",*a);
              printf("Max. : %d\n",*b);
         }else{
              printf("Max. : %d",*c);
              printf("Min. : %d",*a);
         }
 }