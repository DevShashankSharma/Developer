#include<stdio.h>

int main()

{



	int no1,no2,temp;      

	int *ptr1=&no1,*ptr2=&no2;

	printf("Enter first number:\n");

	scanf("%d",&no1);

	printf("Enter second number:\n");

	scanf("%d",&no2);  



         temp=*ptr1;

	*ptr1=*ptr2;

	*ptr2=temp;	



	printf("Numbers after swapping:\nNumber1=%d\nNumber2=%d",*ptr1,*ptr2);



        return 0;



}