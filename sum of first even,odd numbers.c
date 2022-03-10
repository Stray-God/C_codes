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
        if(i%2==1)
        {
        os = os + i;
        printf("%d  ",i);
        }
        else if(i%2==0)
        {
            es = es+i;
        }
        
     
        i++;
    }
printf("\nodd sum = %d\n",os);
printf("even sum = %d\n",es);
printf("total sum = %d",es+os);

}
