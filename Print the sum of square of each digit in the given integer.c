#include <stdio.h>

int main()
{
    int a,b,c,sum=0,r;
    printf("Enter a positive integer :");
    scanf("%d",&a);
  
    while(a!=0){
        r=a%10;
        a=a/10; 
        sum=sum+r*r;
    }    
    printf("%d",sum);
  
    return 0;
}
