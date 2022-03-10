#include <stdio.h>

int main()
{
    int a[10],n,i,p,e;
    
    printf("Enter no of elements:");
    scanf("%d",&n);
    printf("Enter ur %d elements",n); 
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]); 
    }
    printf("Enter element : ");
    scanf("%d",&e);
    printf("Enter position : ");
    scanf("%d",&p);
    if(p>n){
        printf("Invalid Output");
    }
    else
    {
        for(i=n-1;i>=p-1;i--)
        a[i+1]=a[i];
        a[p-1]=e;
        printf("new array :");
        for(i=0;i<=n;i++)
            printf("%d ",a[i]);
    }
    return 0;
}
