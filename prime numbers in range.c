#include <stdio.h>

int main()
{
    int n1,n2,i,j,count;
    printf("Enter range : ");
    scanf("%d %d",&n1,&n2);
    
    for(i=n1;i<=n2;i++)
    {
        if(i==1 || i==0)
            continue;
            
        count=0;
        
        for(j=1;j<=i;j++)
        
             if(i%j==0)
        {
            count++;
        }
        
        if(count==2)
        printf("%d ",i);
    }

    return 0;
}
