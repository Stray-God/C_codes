#include <stdio.h>

int main()
{
    int a,i;
    i=1;
    printf ("enter number :");
    scanf("%d",&a);

    while (i<=a)
    {
        if(i%3==0 && i%6==0 && i%9==0)
        {
            if(i%2==0)
            {
                printf("%d  ",i+1);
            }
            
            else
            {
               printf("%d  ",i+1);
            
            }
        }

        i++;
    }
}
