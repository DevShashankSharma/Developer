#include<stdio.h>
#include<string.h>

int main(){
    char str1[] = "Shashank";
    char str2[20];

    // for(int i=0 ; i<strlen(str1) ; i++){
    //     str2[i]=str1[i];
    // }

    strcpy(str2,str1);
    puts(str2);
     puts(str1);
    return 0;
}