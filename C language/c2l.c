#include<stdio.h>

int main(){
    int x,y,z;
    float average;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    average=(x+y+z)/3.0;
    printf("Average is : %f",average);
    return 0;
}