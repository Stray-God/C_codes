#include <stdio.h>

int main()
{
    int a[10][10];
    int i,j,r,c,sum;
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
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j)
            //sum=0;
                sum = sum + a[i][j];
        }
    }
    printf("%d",sum);

    return 0;
}
