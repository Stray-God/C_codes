#include <stdio.h>

void sum(int ,int ); // declaration or prototype

int main()
{
    int a;
    int b,result;
    
    scanf ("%d %d",&a,&b);
    
    sum(a,b); //fuction call

    return 0;
}
void sum(int x,int y)
{
    printf("%d",x+y);
    
}
