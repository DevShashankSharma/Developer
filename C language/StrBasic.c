#include <stdio.h>
#include<string.h>
 
int main(){
  char str[20];
  printf("Enter Your Name\n");
 // scanf("%s",str);
  fgets(str,20 ,stdin);
  printf("Length of string is : %d\n",strlen(str));

  int cout=0;
  for(int i =0 ; i<strlen(str); i++){
      printf("%c\n",str[i]);
      cout++;
  }  
   
  //  other method to find length of string
  // printf("Length of string : %d\n",cout);


  // Print value of adress of string

  for(int i=0 ; i<strlen(str) ; i++){
    printf("Adress of char of string str[%d] : %d\n",i,&str[i]);
  }
  return 0;
}