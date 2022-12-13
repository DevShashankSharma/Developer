#include<stdio.h>

int main(){
   int n,first,second,third,fourth;
   printf("Enter a 4-digit number\n");
   scanf("%d",&n);
   first=n/1000;
   
   n%=1000;
   second=n/100;
   
   n%=100;
   third=n/10;
   
   n%=10;
   fourth=n;
   
   first=(first+2)%10;
   second=(second+2)%10;
   third=(third+2)%10;
   fourth=(fourth+2)%10;
   printf("sum :%d",first*1000+second*100+third*10+fourth);
   return 0; 
   
} 