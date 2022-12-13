//  #include <stdio.h>

 
//  int main(){
//      int arr[10];
//      for(int i=0;i<10;i++){
//          scanf("%d\n",&arr[i]);
//      }
//       for(int i=0;i<10;i++){
//          printf("%d\n",arr[i]);
//      }
//      return 0;
//  }
 #include <stdio.h>
int main()
{
  int z[20],num,i;
  int pos = 0;
  int neg = 0;
  int odd = 0;
  int even = 0;
  int zero = 0;
  for(i=0;i<20;i++)
  {
    printf("Enter a number\n");
    scanf("%d",&z[i]);
    if(z[i]>0){
      pos++;
    }
    else if(z[i]<0){
      neg++;
    }
    else{
      zero++;
    }
    if(z[i]%2==0){
      even++;
    }
    else{
      odd++;
    }
  }
  printf("Positive : %d\nNegative : %d\nZero : %d\nodd : %d\neven : %d\n",pos,neg,zero,odd,even);
  return 0;
}