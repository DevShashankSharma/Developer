#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int count=0,s=0,x=0,z=0;

    fgets(str,100,stdin);

    for(int i=0 ; i<strlen(str) ; i++){
        if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            count++;
        }else if(str[i]=='0'||str[i]=='1'||str[i]=='2'||str[i]=='3'||str[i]=='4'||str[i]=='5'||str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9' ){
            s++;
        }else if(str[i]==' '){
            x++;
        }else{
            z++;
        }
    }
     printf("No. of Vowels : %d\n",count);    
     printf("No. of Integer's : %d\n",s);  
     printf("No. of White Space : %d\n",x);  
     printf("No. of Consonants : %d\n",z);  
    
    return 0;
}