 #include<stdio.h>
 
 int main(){
     int x;
     scanf("%d",&x);
     int *ptr = &x;
     printf("%u\n",*ptr);
     printf("%u\n",&x);
     printf("Value of adress of pointer of %d is %p\n",x,ptr);
     printf("Adress of pointer %p",&ptr);
     return 0;
 }