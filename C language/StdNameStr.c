#include <stdio.h>
#include<string.h>

int main() {
    char str[20];
    char name[20];
    gets(str);
    int count=0,m;
    
     name[0]=str[0];
     name[1]='.';
     
       for(int i=strlen(str)-1 ; i>=0 ; i--){
        
        if(str[i]==' '){
            m++;
        }
       }
       
       for(int i=strlen(str)-1 ; i>=0 ; i--){
        
        if(str[i]==' '){
            count++;
            if(count==1){
                for(int j=i,n=0 ; j<strlen(str) ; j++,n++){
                    name[2*m +n]=str[j+1];
                }
            }
                if(count>1){
                    
                    name[m]=str[i+1];
                    name[m+1]='.';
                }
        }
        
    }
    puts(name);

    return 0;
}