#include<stdio.h>

int main()

{

	int no1,no2,sum;

	int *ptr1,*ptr2;

	

	printf("Enter number1:\n");

	scanf("%d",&no1);

	printf("Enter number2:\n");

	scanf("%d",&no2);

	

	ptr1=&no1;// it stores address of no1

	ptr2=&no2;// it stores address of no2

	

	sum=*ptr1+*ptr2;// it adds values at address no1 & no2

	

	printf("Sum= %d",sum);

	

	return 0;

}