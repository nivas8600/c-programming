#include<stdio.h>
void main()
{
	int r,c,i,j,a[10][10],transpose[10][10];
	printf("enter rows and columns :");
	scanf("%d%d",&r,&c);
	printf("enter elements of matrix :\n");
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
		scanf("%d",&a[i][j]);
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	transpose[j][i]=a[i][j];
	printf("transpose of a matrix :\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d",transpose[i][j]);
		}
		printf("\n");
	}
	
	
return 0;
}