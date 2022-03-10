#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    switch(a)
    {
        case 1 : printf("Monday");
        break;
        case 2 : printf("tues");
        break;
        case 3 : printf("wednesday");
        break;
        case 4 : printf("thru");
        break;
        case 5 : printf("friday");
        break;
        case 6 : printf("sat");
        break;
        case 7 : printf("sunday");
        break;
        default : printf("wrong Week day");
    }
    return 0;
}
