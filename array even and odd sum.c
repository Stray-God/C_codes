#include <stdio.h>

int main()
{
    int a[10],n,i,es=0,os=0;
    
    printf("Enter no of elements:");
    scanf("%d",&n);
    printf("Enter ur %d elements",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
            es +=a[i];
        else
            os +=a[i];
    }
    printf("even sum = %d\n odd sum = %d",es,os);
    
    return 0;
}
