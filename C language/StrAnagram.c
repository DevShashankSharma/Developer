#include <stdio.h>
#include <string.h>
int main()
{
  char s1[] = "ajax";
  char s2[] = "jaxa";
  int i,j;
  int anagram = 1;

  //only if both strings have same length
  if(strlen(s1)!=strlen(s2))
  {
    anagram = 0;
  }
  else
  {
    //matching every element of s2 with every element of s1
    for(i = 0;i<strlen(s1);i++)
    {
      int found = 0;
      for(j = 0;i<strlen(s2);j++)
      {
          if(s1[i] == s2[j])
          {
            //if equal then equating it to empty char
            //so doesn't match again
            s2[j] = ' ';
            found = 1;
            break;
          }
      }
      //if not found then it is not an anagram
      if(found == 0)
      {
        anagram = 0;
        break;
      }
    }
  }

  printf("%d\n",anagram);

  return 0;
}