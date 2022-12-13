#include<stdio.h>

int main(){
    int x=97;
    int *ptr = &x;
     
    for(*ptr;*ptr<=122;(*ptr)++){
        printf("%c\n",*ptr);
    }
    return 0;
}