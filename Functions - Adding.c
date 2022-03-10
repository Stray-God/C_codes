#include <stdio.h>

float sum(int a,float b);

int main()
{
    int a;
    float b;
    scanf ("%d %f",&a,&b);
    printf("sum = %f",sum(a,b));

    return 0;
}
float sum(int a,float b)
{
    return(a+b);
}
