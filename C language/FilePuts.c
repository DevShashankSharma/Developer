#include<stdio.h>

int main(){
    FILE *fptr;
    fptr=fopen("Hello.txt","w");

    fputs("Welcome to c tutorial of file handling......\n",fptr);

    fputc('a',fptr);

    fclose(fptr);

    return 0;
}