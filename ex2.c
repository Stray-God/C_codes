#include <stdio.h>

int main(void) 
{
  int a = 100;
  while(a<=101) // x=100 ,x=101 x=102 (fails)
    {
      a++; //x==101(in memory) // x=102(in memory)
      printf("%d ",a); //x=101(prints) , x=102(prints)
    }

}
