#include <stdio.h>

int main()
{
    int i,n,j,a[10],temp=0;
    printf("enter no of elements : ");
    scanf("%d",&n);
    printf("enter ur %d elements :",n );
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n/2;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        
        for(j=n/2;j<n-1;j++)
        {
            if(a[j]<a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    
    
    
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    

    
    return 0;

}
