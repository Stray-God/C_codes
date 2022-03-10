#include <stdio.h>

int sum(); // declaration or prototype

int main()
{
    int result;
    result = sum();
    printf ("%d",result);

    return 0;
}
int sum() //called
{
    int x,y;
    scanf("%d %d",&x,&y);
    
    return(x+y);
    
}
