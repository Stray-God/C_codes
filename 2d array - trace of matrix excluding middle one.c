#include <stdio.h>

int main()
{
    int a[10][10];
    int i,j,n,sum,sum2=0;
    printf("enter order of matrix ");
    scanf("%d",&n);
    
    printf("enter elements of matrix ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j || i+j==n-1)
            //sum=0;
                sum = sum + a[i][j];
        }
    }
    
    printf("%d \n",sum);
   
    return 0;
}
