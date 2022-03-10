#include <stdio.h>

int main()
{
    int input_number,o_num,e_num,rem;
    printf("Enter a number : ");  
    scanf("%d",&input_number);  //12345
    
    e_num=o_num=0;
    while(input_number!=0)   //12345 not equal to zero  
    {
        rem = input_number%10; // rem = 12345%10 == 5 ; 1234%10 ==4 ; 123%10 == 3;
        if(rem%2==0) // 5%2
        {
            e_num=e_num+(rem*rem); // 0+4*4
        }
        else
        {
            o_num=o_num+((rem+1)*5); // 0+(5+1)*5 ; 30+(3+1)*6
        }
        input_number = input_number/10; // 12345/10=1234 ; 1234/10=123 ;
        
    }
    printf("%d",e_num+o_num);
    return 0;
}
