#include <stdio.h>

int sum(int ,int ); // declaration or prototype

int main()
{
    int a;
    int b,result;
    scanf ("%d %d",&a,&b);
    sum(a,b); //fuction call
    result = sum(a,b);
    printf("%d",result);

    return 0;
}
int sum(int x,int y)
{
    return(x+y);
}
