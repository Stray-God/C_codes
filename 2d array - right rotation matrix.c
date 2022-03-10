#include <stdio.h>

int main()
{
    int a[10][10];
    int i,j,n,r,c;
    
    printf("enter order of matrix ");
    scanf("%d %d",&r,&c);
    
    printf("enter elements of matrix ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    for(i=0;i<c;i++)
    {
        for(j=r-1;j>=0;j--)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}
