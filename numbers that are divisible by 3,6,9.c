#include <stdio.h>

int main()
{
    int a,i,os,es;
    i=1;
    os=0;
    es=0;
    printf ("enter number :");
    scanf("%d",&a);

    while (i<=a)
    {
        if(i%3==0 && i%6==0 && i%9==0)
        {
        printf("%d  ",i);
        }

        i++;
    }
    
    return 0;

}
