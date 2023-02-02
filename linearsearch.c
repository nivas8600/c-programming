#include<stdio.h>
int main()
{
    int a[20],i,x,n;
    printf("enter n value = ");
    scanf("%d",&n);
    printf("enter array elements :");
    for(i=0;i<n;++i)
        scanf("%d",&a[i]);
    printf("element to be searched:");
    scanf("%d",&x);
    for(i=0;i<n;++i)
        if(a[i]==x)
            break;
    if(i<n)
        printf("element is present at %d position",i+1);
    else
        printf("element not found");
    return 0;
}