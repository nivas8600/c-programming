#include <stdio.h>
void main()
{
  int age;

  printf("enter age of candidate");
  scanf("%d",&age);
  if (age<18)
     {
       printf("not eligible for vote\n");
       printf("you have to wait for %d more year\n",18-age);
     }
  else
     printf("eligible for vote\n");
}
