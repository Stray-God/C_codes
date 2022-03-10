#include <stdio.h>

int main()
{
    int a[10],n,i,l,sl;
    
    printf("Enter no of elements:");
    scanf("%d",&n);
    printf("Enter ur %d elements",n); 
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]); 
    }
    l=a[0]; 
    sl=a[1]; 
    for(i=1;i<n;i++)
    {
        if(a[i]>l) 
        {
            sl=l; 
            l=a[i]; 
        }
        else if(a[i]>sl && a[i]<l)  
            sl=a[i];
    }
    printf("L=%d\n SL=%d",l,sl);
    
    return 0;
}
