#include <stdio.h>

void sum(); // declaration or prototype - in main function only calling

int main()
{
    
    sum(); //fuction call

    return 0;
}
void sum()
{
    int x,y;
    scanf ("%d %d",&x,&y);
    printf("%d",x+y);
    
}
