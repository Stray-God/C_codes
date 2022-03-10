#include<stdio.h>

int main()
{
    int n,i,r,sum=0,a, sum2 =0;
    
    scanf("%d",&n);
    
    while(n!=0)
    {
        r = n%10;
        n=n/10;
        sum = sum + r;
    }
    a=64+sum;
    if(a>=65 && a<=90)
    {
        printf("%c",a);
    }
    else 
    {
        while(sum!=0)
        {
            r =sum%10;
            sum=sum/10;
            sum2 = sum2 + r;
        }
        printf("%c",64+sum2);
    }
}
