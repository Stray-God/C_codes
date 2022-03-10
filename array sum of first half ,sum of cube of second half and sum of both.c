#include <stdio.h>

int main()
{
    int i,n,j,a[10],product=1,cube=0,sum;
    printf("enter no of elements : ");
    scanf("%d",&n);
    printf("enter ur %d elements :",n );
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n/2;i++)
    {
        product = product*a[i];
    }
    printf("sum = %d\n",product);
    
    for(i=n/2;i<n;i++)
    {
        cube=cube+(a[i]*a[i]*a[i]);
    }
    sum = product + cube;
    printf("cube = %d\n",cube);
    printf("sum = %d ",sum);
    
    return 0;

}
