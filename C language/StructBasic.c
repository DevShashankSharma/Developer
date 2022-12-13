#include<stdio.h>
#include<string.h>

struct student {
    int rollNo;
    char name[100];
    int age;
    int mark;
};

int main(){ 
    struct student s1 = {123,"Shashank",19,10};
    // struct student s1;
    // s1.age=19;
    // s1.mark=10;
    // strcpy(s1.name,"Shashank");
    // s1.rollNo = 123; 
    
    // scanf("%d",&s1.age);
    // scanf("%s",s1.name);
    // scanf("%d",&s1.mark); 

    printf("Age : %d\n",s1.age);
    printf("Name : %s\n",s1.name);
    printf("Mark : %d\n",s1.mark); 

    return 0;
    
}