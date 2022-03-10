#include <stdio.h>

void  main(){
  int n,i,sum;
  int mn,mx;
  printf("Input the starting range or number : ");
  scanf("%d",&mn);
  printf("Input the ending range of number : ");
  scanf("%d",&mx);
  printf("The Perfect numbers within the given range : ");
  for(n=mn;n<=mx;n++){
    i=1;
    sum = 0;
    while(i<n){   //i=1,2...
      if(n%i==0)  
           sum=sum+i; //0+1,1+2...
          i++;
    }
    if(sum==n)
      printf("%d ",n);
  }
      printf("\n");
}


/*
#include <stdio.h>

int main()
{
    int i,j,start,end,sum;
    printf("Input the starting range or number : ");
    scanf("%d",&start);
    printf("Input the ending range of number : ");
    scanf("%d",&end);
    
    for(i=start;i<=end;i++)
    {
        sum=0;
        for(j=1;j<i;j++)
        {
            if(i%j==0)
            {
                sum =sum+j;
            }
        }
        if (sum==i)
        {
            printf("%d  ",i);
        }
    }
    return 0;
}
*/
