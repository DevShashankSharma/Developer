#include<stdio.h>

int main(){
    FILE *fptr;
    char read[100];
    fptr=fopen("Hello.txt","r");

    // printf("%s",fgets(read,100,fptr));
    // printf("%s",fgets(read,100,fptr));
            //  OR 
    // fgets(read,100,fptr);
    // printf("%s",read);



    printf("%c",fgetc(fptr));
    printf("%c",fgetc(fptr));

    fclose(fptr);

    return 0;
}