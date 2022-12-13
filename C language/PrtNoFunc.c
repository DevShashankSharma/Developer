 #include<stdio.h>
 
 void print(int *a);
 
 int main(){
     int x;
     printf("Enter a No. \n");
     scanf("%d",&x);
     print(&x);
 }
 
 void print(int *a){
     printf("No. is : %d\n",*a);
 }