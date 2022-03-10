#include <stdio.h>
int main() {
    char c;
    int a, b;
    printf("Enter an alphabet: ");
    scanf("%c", &c);

    
    a = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    
    b = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    
    if (a || b)
        printf("%c is a vowel.", c);
        
    else if(c >= '0' && c <= '9')
        printf("'%c' is digit.", c);
        
    else
        printf("%c is a consonant.", c);
    return 0;
}
