#include <stdio.h>

int main()
{
    int a[10],n,i,se;
    
    printf("Enter no of elements:");
    scanf("%d",&n);
    
    printf("Enter ur %d elements",n); 
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]); 
    }
    
    printf("Enter search element : ");
    scanf("%d",&se);
  
    for(i=1;i<=n;i++){
        if(a[i]==se)
            printf("position at %d",i+1);
    } 
    
    return 0;
}
