#include <stdio.h>
#include <string.h>

int main()
{
    char str[10];
    int l;
    //char str[]="hello12";
    gets(str);
    l=strlen(str);
    //printf("%s",str);
    //puts(str);
    printf("%d",l);

    return 0;
}
