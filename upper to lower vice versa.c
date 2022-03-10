#include <stdio.h>

int main()
{
    char ch;

    printf("Enter any character: ");
    scanf("%c", &ch);

    if(ch >= 97 && ch <= 122) 
    {
        printf("'%c' is  alphabet.", ch-32);
    }
    else if (ch >= 65 && ch <= 90)
    {
        
        printf("'%c' is upper case alphabet.", ch+32);
    }
    return 0;
}
