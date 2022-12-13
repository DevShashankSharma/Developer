#include<stdio.h>
#define size 3//size of matrix

int main()
{
 int a[size][size],
 b[size][size],
 c[size][size];
 
 int row,col,i,sum=0;
 
 //accept elements in first matrix
 printf("Enter elements in first matrix of size 3x3:\n");
 for(row=0;row<size;row++)
 {
  for(col=0;col<size;col++)
  {
   scanf("%d",&a[row][col]);
  }
 }
 
 //accept elements in second matrix
  printf("Enter elements in second matrix of size 3x3:\n");
 for(row=0;row<size;row++)
 {
  for(col=0;col<size;col++)
  {
   scanf("%d",&b[row][col]);
  }
 }
 //multiply both matrices a&b
  for(row=0;row<size;row++)
  {
      for(col=0;col<size;col++)
      {
      for(i=0;i<size;i++)
   {
    sum+=a[row][i]*b[i][col];
   }
   c[row][col]=sum;
   sum=0;
    }
  }

 //print multiplication of matrices
  printf("Multiplication of matrices=\n");
 for(row=0;row<size;row++)
 {
  for(col=0;col<size;col++)
  {
   printf("%d  ",c[row][col]);
  }   
   printf("\n");
 }
 return 0;
}