#include <stdio.h>
#include <math.h>
int main()
{
  int n;
  printf("enter n ");
  scanf("%d", &n);
  int square = pow(n, 2);
  int cube = pow(n, 3);
  printf("square of %d is %d.\n", n, square);
  printf("cube of %d is %d.\n", n, cube);
  return 0;
}
