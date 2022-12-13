#include <stdio.h>
#include<string.h>

int main() {
    char str[] = "Hello, World";
    
    for(int i=0 ; i<strlen(str) ; i++){
        if(str[i]== 'o'){
            printf("First occurrence of 'o' is : %d\n",i+1);
            break;
        }
    }
    for(int i=1 ; i<strlen(str) ; i++){
        if(str[strlen(str)-i]== 'o'){
            printf("Last occurrence of 'o' is : %d\n",i);
            break;
        }
    }
    for(int i=0 ; i<strlen(str) ; i++){
        if(str[i]== ','){
            printf("First occurrence of ',' is : %d\n",i+1);
            break;
        }
    }
    for(int i=strlen(str)-1 ; i>=0  ; i--){
        if(str[strlen(str)-i]== ','){
            printf("Last occurrence of ',' is : %d\n",i);
            break;
        }
    }
    return 0;
}