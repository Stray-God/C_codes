#include"stdio.h"

int main()
{
 int a,b,c;
 printf("enter a");
 scanf("%d",&a);
 printf("enter b");
 scanf("%d",&b);
 printf("enter c");
 scanf("%d",&c);
 
 
 if(a>b) 
    if(a>c)
    printf("largest: %d",a);
    else 
    printf("largest: %d",c);
    
 
 else if(b>c)
 printf("largest: %d",b);

 else
 
 printf("largest: %d",c);
}