#include <stdio.h>

int main()
{
  int radius;
  float area;
  printf("Enter radius of circle\n");
  scanf("%d", &radius);
  area = 3.14*radius*radius;
  printf("Area of circle is %.2f\n", area);    // .2f will give only two value after decimal
  return 0;
}