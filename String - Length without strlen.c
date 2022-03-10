#include <stdio.h>

int main()
{
    char str[10];
    int l=0,i;
    
    gets(str);
    
    for(i=0;str[i]!='\0';i++)
    {
        l++;
    }
    
    printf("%d",l);

    return 0;
}
