#include<stdio.h>
#include<string.h>

struct student {
    char name[20];
    int marks;
    float cgpa;
    char course[20];
};

int main(){
    struct student stu[5];
    strcpy(stu[0].name,"Shashank");
    stu[0].marks=10;
    stu[0].cgpa=9.9;
    strcpy(stu[0].course,"CSE");

    strcpy(stu[1].name,"Sankar");
    stu[1].marks=9;
    stu[1].cgpa=9.7;
    strcpy(stu[1].course,"EE");

    strcpy(stu[2].name,"Ritika");
    stu[2].marks=7;
    stu[2].cgpa=7.9;
    strcpy(stu[2].course,"AIDS");

    strcpy(stu[3].name,"Neha");
    stu[3].marks=10;
    stu[3].cgpa=8.9;
    strcpy(stu[3].course,"IT");

    strcpy(stu[4].name,"Rahul");
    stu[4].marks=5;
    stu[4].cgpa=4.9;
    strcpy(stu[4].course,"AI");

    FILE *fptr=fopen("Hello.txt","w");
    
     
    fprintf(fptr,"%s\t",stu[0].name);
    fprintf(fptr,"%d\t",stu[0].marks);
    fprintf(fptr,"%f\t",stu[0].cgpa);
    fprintf(fptr,"%s\n",stu[0].course);

    fprintf(fptr,"%s   \t",stu[1].name);
    fprintf(fptr,"%d\t",stu[1].marks);
    fprintf(fptr,"%f\t",stu[1].cgpa);
    fprintf(fptr,"%s\n",stu[1].course);

    fprintf(fptr,"%s   \t",stu[2].name);
    fprintf(fptr,"%d\t",stu[2].marks);
    fprintf(fptr,"%f\t",stu[2].cgpa);
    fprintf(fptr,"%s\n",stu[2].course);

    fprintf(fptr,"%s     \t",stu[3].name);
    fprintf(fptr,"%d\t",stu[3].marks);
    fprintf(fptr,"%f\t",stu[3].cgpa);
    fprintf(fptr,"%s\n",stu[3].course);

    fprintf(fptr,"%s    \t",stu[4].name);
    fprintf(fptr,"%d\t",stu[4].marks);
    fprintf(fptr,"%f\t",stu[4].cgpa);
    fprintf(fptr,"%s\n",stu[4].course);
    
    fclose(fptr);

    return 0;

}