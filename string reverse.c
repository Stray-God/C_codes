#include <stdio.h>  
 
#include <string.h>  
int main()  
{  
    char str[50], temp;  
    int i, right, len;  
     
    scanf( "%s", str);  
    len = strlen(str);   
    
    right = len - 1; 
    
    for (i = 0; i <right; i++)  
    {  
        temp = str[i];  
        str[i] = str[right];  
        str[right] = temp;  
        right--;  
    }  
    printf ("%s",  str);  
    return 0;  
}  
