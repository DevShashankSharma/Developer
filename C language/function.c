#include <stdio.h>

void printnamaste();
void printbonjour();

int main() {
    char x;
     printf("Enter 'i' for indian and 'f' for french\n");
     scanf("%c\n",&x);
     if(x=='i'){
         printnamaste();
     }else{
         printbonjour();
     }
     return 0;
}
void printnamaste(){
    printf("Namaste\n");
}
void printbonjour(){
    printf("Bonjour\n");
}