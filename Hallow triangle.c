#include <stdio.h>

int main()
{
    int i,j,k,c,rows;
    printf("Enter no of rows");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        
        for(j=1;j<=i;j++)
        {
            if(j==1 || i==rows || j==i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
