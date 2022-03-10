#include <stdio.h>

int main()
{
    int i,j,temp,n,a[10];
    printf("enter no of elements : ");
    scanf("%d",&n);
    printf("enter ur %d elements :",n );
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //temp=0;
    for(i=n/2,j=n-1;i<j;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    printf("after reversing ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    return 0;
}
