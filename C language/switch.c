#include<stdio.h>
#include<math.h>

int main(){
    float x,y;
    char ch;
    printf("Enter 1st no. [+,-,*,/] 2nd no.\n");
    scanf("%f %c %f",&x,&ch,&y);
    switch(ch){
        case  '+' :printf("%f",x+y);
                 break; 
        case  '-' : printf("%f",x-y);
                  break;
        case  '*' : printf( "%f",x*y);
                 break;     
        case  '/' :printf("%f",x/y);  
                 break;
        default : printf("invalid input\n"); 
    }
    return 0;
}

