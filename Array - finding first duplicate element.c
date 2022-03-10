#include <stdio.h>
#include<stdlib.h>

int main()
{
    int a[10],i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    int count=0;
    for(i=0;i<n;i++)
    {
        for(j= i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                printf("%d",a[i]);
                exit(0);
            }
        }
    }

    return 0;
}
