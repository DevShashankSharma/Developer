 #include<stdio.h>
  #include<math.h>
  
  int reverse(int *k);
  
  int main(){
      int y =223;
      printf("%d",reverse(&y));
      return 0;
  }
  
  int reverse(int *k){
      int x = *k;
      int num=0,i,b=x;
      for(i=-1;b>0;i++){
          b=b/10;
      }
      for(i; x>0 ;i-- ){
          int a=x%10;
          x = x/10;
          num = num + a * pow(10,i);
          
      }
      return num;
  }