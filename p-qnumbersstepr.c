#include<stdio.h>
int main()
{
	int p,q,r,i,c=0;
	printf("enter values from :");
	scanf("%d%d",&p,&q);
	printf("enter r value ");
	scanf("%d",&r);
	
	for(i=60;i<=70;i++)
	{
	    if(c==r)
		 {
			c++;
		 }
	
	    else
	     {
	     	printf("%d\n",i);
	     	c++;
		 }
}
return 0;
}