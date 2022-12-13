#include<stdio.h>
#include<string.h>
 

int main(){
    FILE *fptr;
    char read[500];
    fptr=fopen("Hello.txt","r");

    fgets(read,500,fptr);

    // printf("%c",read[0]);
    int count = 0;
    for(int i=0 ; read[i]!=NULL ; i++){
        if(read[i]=='a'||read[i]=='e'||read[i]=='i'||read[i]=='o'||read[i]=='u'||read[i]=='A'||read[i]=='E'||read[i]=='I'||read[i]=='O'||read[i]=='U'){
            count++;
        }
    }
    printf("%d",count);
    fclose(fptr);


    fptr=fopen("Hello.txt","w");

    fprintf(fptr,"%d",count);

    fclose(fptr);

    return 0;
}