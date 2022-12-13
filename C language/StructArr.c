#include<stdio.h>
#include<string.h>

struct student {
    int rollNo;
    char name[100];
    int age;
    int mark;
};

int main(){
    struct student stu[4];
    stu[0].age=19;
    strcpy(stu[0].name,"Shashank");
    stu[0].rollNo=1;
    stu[0].mark=10;
     
    
    // for(int i=0; i<=4; i++) {
    //      if(stu[i].rollNo == 2){
    //           printf("Student %d\n",i+1);
    //           scanf("%d",&stu[i].rollNo);
    //           scanf("%s",stu[i].name);
    //           scanf(" %d",&stu[i].age);
    //           scanf(" %d",&stu[i].mark);
    //     }
    // }
    for(int i=0; i<=4; i++) {
         if(stu[i].rollNo == 1){
              printf("Student %d\n",i+1);
              printf("Roll no. : %d\n", stu[i].rollNo);
              printf("Name : %s\n", stu[i].name);
              printf("Age. : %d\n", stu[i].age);
              printf("Mark. : %d\n", stu[i].mark);
        }
    }
    return 0;
    
}