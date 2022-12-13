#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char str[100],word[20],twoD[10][30];
    int j=0,k=0,count=0;

    printf("Enter string\n");
    gets(str);

    printf("Enter word you want to delete\n");
    gets(word);

    
    //Making String in 2D Array
    for(int i=0 ; str[i]!='\0'; i++){
        if(str[i]==' '){
            twoD[k][j]='\0';
            k ++;
            j=0;
        }else{
            twoD[k][j]=str[i];
            j++;
        }
    }
    twoD[k][j]='\0';

     j=0;
    for(int i=0 ; i<=k ; i++){
        if(strcmp(twoD[i],word)==0){
            twoD[i][j]='\0';
            count++;
        }
    }
    j=0;
    for (int i = 0; i<=k; i++){
        if(twoD[i][j]=='\0')
            continue;
        else
            printf("%s ",twoD[i]);
        
    }
    
    printf("\n");
    printf("%d\n",count);
    return 0;
}