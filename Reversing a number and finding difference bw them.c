#include <stdio.h>

int main()
{
    int i,n,count=0,r,reverse=0,Diff,temp;
    scanf("%d",&n);
    temp=n;
    
    while(temp!=0)
    {
        r=temp%10;
        reverse = reverse * 10 + r;
        temp=temp/10;
    }
    Diff = n-reverse;
    
    printf("%d",Diff);

    return 0;
}
