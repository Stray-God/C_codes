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
    
    printf("Enter position : ");
    scanf("%d",&p);
    
    if(p>=n+1){
        printf("can't del");
    }
    else
    {
        for(i=p-1;i<n-1;i++)
        a[i]=a[i+1];
       
        printf("new array :");
        for(i=0;i<n-1;i++)
            printf("%d ",a[i]);
    }
    return 0;
}
