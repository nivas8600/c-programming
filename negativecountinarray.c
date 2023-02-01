#include <stdio.h>
int main()
{
    int arr[500],i, n, count = 0; 

    printf("Enter n value : ");
    scanf("%d", &n);

    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++)
    {
        if(arr[i] < 0)
        {
            count++;
        }
    }

    printf("negative numbers count = %d", count);

    return 0;
}
