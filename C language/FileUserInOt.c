#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{

    FILE *fptr;
    char str[500];

    // fptr = fopen("Hello.txt", "w");
    // to append
    fptr = fopen("Hello.txt", "a");
    
    if(fptr==NULL) 
    {
        printf("Error! File not created:(");
        exit(1);
    }

    //Get data from user using fgets()
    // printf("Enter data to store in file:\n");
    // fgets(str, 500,stdin);
          // OR
    //Input data to append
    printf("Enter data to append:\n");
    gets(str);
    

    //store data in file
    fputs(str,fptr);

    printf("Data stored successfully into the file...");

    fclose(fptr);

    return 0;

}