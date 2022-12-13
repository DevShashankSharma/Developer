#include<stdio.h>
#include<string.h>

int main(){
    char str[]="shashank sharma";
    int len=strlen(str);
    
    // Removing all consonants
    // for(int i=0 ; i<len ; i++){
    //      if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u'&&str[i]!='A'&&str[i]!='E'&&str[i]!='I'&&str[i]!='O'&&str[i]!='U'&&str[i]!=' '){
    //         for(int j =i ; j<strlen(str) ; j++){
    //             str[j]=str[j+1];
    //         }
    //         i--;
    //         len--;
    //      }
    // }
    // puts(str);


    
    return 0;
}