#include <stdio.h>

int main()
{
    int i,n,a[10],sum=0;
    printf("enter no of elements : ");
    scanf("%d",&n);
    printf("enter ur %d elements :",n );
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n/2;i++)
    {
        sum = sum+a[i];
    }
    printf("sum =%d ",sum);

    return 0;
}
