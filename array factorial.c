#include <stdio.h>

int main()
{
    int a[10],n,i,f,j;
    
    printf("Enter no of elements:");
    scanf("%d",&n);
    printf("Enter ur %d elements",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        f=1;
        for(j=1;j<=a[i];j++)
    {
        f=f*j;
    }
    printf("%d ",f);
    }
    
    return 0;
}
