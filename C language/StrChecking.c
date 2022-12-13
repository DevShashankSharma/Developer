#include<stdio.h>
#include<string.h>

int main(){
    char str[] = "Umbrella";

    for(int i=0 ; str[i] != '\0' ; i++){
    //for(int i=0 ; i<strlen(str) ; i++){
        if(str[i]=='x'){
            printf("Present\n");
            break;
        }
    }
    printf("Not present\n");
    return 0;
}