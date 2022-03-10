#include <stdio.h>
int main()
{
    int num1, num2, largest;
    printf("Please Enter two different values\n");
    scanf("%d %d", &num1, &num2);
    largest =((num1>num2)?num1:num2);
    printf("Largest number = %d \n",largest);
    return 0;
}
