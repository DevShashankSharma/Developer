#include<stdio.h>
#include<string.h>

void main()
{
 char str[100];
 int i,len;
 
 printf("Enter the string:\n");
 gets(str);
 
 len=strlen(str);//calculate length of string
 
 for(i=0;i<len;i++)
 {
  if(str[i]>='a'&&str[i]<='z')
  {
   str[i]-=32;//subtract 32 to make it capital
  }
  else if(str[i]>='A'&&str[i]<='Z')
  {
   str[i]+=32;//add 32 to make it small
  } 
 }
 
 printf("Toggled string:\n%s",str);
}