 #include<stdio.h>
    
	int main(){
	    int a=101010,b=1;
		for(int i=1;i<=4;i++){
			if(a>0){
		        printf("%d",a);
			    a/=100;
			}
			printf("%d\n",b);
			 printf(" ");
			 if(i>=2){
				printf(" ");
			 }
			 if(i>=3){
				printf(" ");
			 }
		}

		return 0;
	}