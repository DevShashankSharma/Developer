#include <stdio.h>
#include <string.h>
int main(){
    char first[]="This is orange juice";
    char second[]="orange";
    int i,j;
    int found = 0;
    //length of orange is 6 and first sentence is 20
    //we will iterate and check if the characters form the word orange or not
    for(j=0;j<=15;j++){
      //checking if orange or not
      //6 is the length of orange
      int k=0;
      for(i=j;i<j+6;i++){
        if(first[i]!= second[k]){
          break;
        }
        else{
          k++;
        }
        
      }
      //if k>5 means orange is found
      //because if found then k will increase uptill 6
      if(k>5){
        found = 1;
        break;
      }
    }
    if(found == 1){
      printf("Found\n");
    }
    else{
      printf("Not found\n");
    }
    return 0;
}


// #include<stdio.h>
// #include<string.h>

// void main()
// {
//  char str[100];//declare string of max size 100
//  int i=0,count=1;
 
//  printf("Enter the string:\n");
//  gets(str);
 
// /*Iterate loop till end of string*/ while(str[i]!='\0')
//  {
//   /* check whether the current character is space or new line*/
//   if(str[i]== ' '||str[i]=='\n')
//   {
//    count++;
//   }
//   i++;
//  }
//  printf("Number of words are:%d",count);
// }
