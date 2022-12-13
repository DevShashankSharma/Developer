#include <stdio.h>

int main() {
    
    for(int j=2;j<=100;j++){
      for(int i =2 ; i<=j;i++ ){
       if (j%i==0){
           if(i==j){
               printf("%d\n",j);
           }else{
                break;
           }
       }
      }
    }
    return 0;
}