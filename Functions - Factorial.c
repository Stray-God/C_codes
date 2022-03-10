#include <stdio.h>

int fac(int); // declaration or prototype

int main()
{
    int num;
    int result;
    scanf ("%d",&num);
    fac(num); //fuction call
    result = fac(num);
    printf("%d",result);

    return 0;
}
int fac(int num)
{
    int i,f=1;
    for(i=1;i<=num;i++)
    {
        f = f*i;
    }
    return(f);
}
