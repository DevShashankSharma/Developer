#include<stdio.h>
    
	int main(){
	    int no1,no2,factor,integer,i;
		printf("Enter two integer");
		scanf("%d",&no1);
		
		integer=no1;
		  for(integer=no1 ; integer!=1 ; ++i){
		      integer /= i;
			  if(integer%i==0){
			  factor = no1/i;
			  printf("%d",factor);
			  }
		    }
		return 0;
	}