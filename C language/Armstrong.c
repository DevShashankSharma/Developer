#include<conio.h>
#include<stdio.h>
#include<math.h>

int main(){
    int num,OriginalNum,n=0,remainder;
    float sum = 0.0;
    printf("Enter an integer");    
	scanf("%d",&num);
	
	OriginalNum= num;
	//counting no. of digit
	for(OriginalNum = num;OriginalNum != 0; ++n){
	    OriginalNum /= 10;
	}
	for(OriginalNum = num;OriginalNum !=0; OriginalNum /=10){
	    remainder = OriginalNum%10;
		sum += pow(remainder, n);       //  sum of all digit power n
	}
	if(sum==num){
	    printf("It is Armstrong no.\n");
	}else{
	    printf("Not a Armstrong no.\n");
	}
	return 0;
}