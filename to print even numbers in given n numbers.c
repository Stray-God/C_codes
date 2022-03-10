#include <stdio.h>

int main()
{
    int a,i;
    i=1;
    printf ("enter number :");
    scanf("%d",&a);
    
    
    
    while (i<=a)
    {
        if(i%2==0)
        printf("%d\t",i);
        i++;

    }

    return 0;
}
