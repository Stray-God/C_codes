#include <stdio.h>

int main()
{
    int a[10],n,i;
    
    printf("Enter no of elements:");
    scanf("%d",&n);
    printf("Enter ur %d elements",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("even numbers: ");
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        printf("%d ",a[i]);
    }
    printf("\nodd numbers: ");
    for(i=0;i<n;i++)
    {
        if(a[i]%2==1)
        printf("%d ",a[i]);
    }
    
    return 0;
}
