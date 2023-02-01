/* C Program to find Perfect Number using For Loop */

# include <stdio.h>   

int main()   
{   
 int i,n,sum = 0 ;   
 printf("enter n value ") ;   
 scanf("%d", &n) ;   
 for(i = 1 ; i < n ; i++)   
  {   
   if(n % i == 0)   
     sum = sum + i ;   
  }    

 if (sum == n)   
    printf("%d is perfect number \n", n) ;   
 else   
    printf("%d is not perfect number\n", n) ;   

return 0 ;   
}