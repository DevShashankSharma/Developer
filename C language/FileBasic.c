// Above program will create a file in the same folder where your program file is saved. 
// We can also give a path to create a file at specific location.


#include<stdio.h>
int main()
{
    FILE *fp;
   
    fp = fopen("Desktop:file.txt","w");
     /*Close file to release the
     allocated memory*/

    fclose(fp);
    
    return 0;
}

// #include<stdio.h>

// int main(){
//     FILE *fptr;
//     fptr=fopen("Hello.txt","w");

//     fclose(fptr);

//     return 0;
// }