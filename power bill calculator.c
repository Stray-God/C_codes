#include"stdio.h"

int main()
{
 float a;
 float charge,sc,bill;
 printf("Enter no.of units : ");
 scanf("%f",&a);

    if(a<=50) 
    charge = a * 1.50;
    
    
    else if(a<=150)
    charge = 75+((a-50)*1.75);
    
    
    else if(a<=250)
    charge = 262.5+((a-150)*2.25);
    
    
    else
    charge = 562.5+((a-250)*2.75);
    
    sc=charge*(15/100);
    bill=sc+charge;
 
    printf("your bill: %.2f",bill);
}
