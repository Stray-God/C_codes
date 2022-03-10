#include<stdio.h>
#include<math.h>

int main()
{
 int a,b,c;
 float d,r1,r2,real,img;
 printf("Enter a,b,c values : ");
 scanf("%d%d%d",&a,&b,&c);

 d=((b*b)-(4*a*c));
 
    if(d>0) 
    {
        
        printf("roots are real and unequal\n");
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("r1=%.2f \t, r2=%.2f",r1,r2);
    }
    
    else if(d==0)
    {
    printf("roots are real and equal\n");
    r1=r2=(-b/(2*a));
    printf("r1=%.2f \t, r2=%.2f",r1,r2);
    }
    
    else
    {
    printf("roots are imaginary\n");
    real=(-b/(2*a));
    img=(sqrt(d)/(2*a));
    printf("r1=%.2f+i.2%f \t",real,img);
    printf("r1=%f-i%f",real,img);
    }
}
