#include <stdio.h>

int main()
{
    int a[10],n,i,l,s;
    
    printf("Enter no of elements:");
    scanf("%d",&n);
    printf("Enter ur %d elements",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    l=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>l)
            l=a[i];
    }
    
    s=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<s)
            s=a[i];
    }
    printf("L=%d \n S=%d",l,s);
    
    return 0;
}
