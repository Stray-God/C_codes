#include <stdio.h>

int main()
{
    float a,b,c,d,e;
    float total_marks,percentage;
    printf("Enter marks of five subjects :");
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
    total_marks=a+b+c+d+e;
    if(total_marks<=500)
    {
        percentage=(total_marks/500)*100;
        printf("Percentage = %.2f\n",percentage);
    }
    if(percentage>= 90){
        printf("Grade O");
    }
    else if(percentage>= 80){
        printf("Grade A+");
    }
    else if(percentage>= 70){
        printf("Grade A");
    }
    else if(percentage>= 60){
        printf("Grade B+");
    }
    else if(percentage>= 40){
        printf("Grade B");
    }
    else if(percentage < 40){
        printf("Grade F");
    }

    return 0;
}
