#include <stdio.h>

int main()
{
    int a[50],i,n,j,count=0,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        for(j=1;j<=a[i];j++)
        {
            if(a[i]==j*j*j)
            {
                count++;
                
            }
        }
        
    }
    
    printf("%d",count);

    return 0;
}
