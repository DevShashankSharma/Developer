#include<stdio.h>
#include<string.h>

int main(){
    char str1[] = "Shashank";
    char str2[] = "Sharma";
     //int equal=0;
     
   //length must be equal 
//    if(strlen(str1)!=strlen(str2)){
//        equal = 0;
//     } else {
//        for(int i = 0;i<strlen(str1);i++) {
//            if(str1[i]!=str2[i]) {
//              equal = 0;
//              break;
//             }
//         }
//     }
//     printf("%d\n",equal);

  printf("%d\n",strcmp(str2,str1));
   
    return 0;
}