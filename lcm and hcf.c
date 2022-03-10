#include <stdio.h>
int main() {
  int a, b, x, y, temp, hcf, lcm;

  printf("Enter two integers\n");
  scanf("%d%d", &x, &y);

  a = x;
  b = y;
  
  while (b != 0) {
    temp = b; 
    b = a % b; 
    a = temp; 
  }

  hcf = a;
  lcm = (x*y)/hcf;

  //printf(" %d",hcf);
  printf(" %d %d",hcf,lcm);
  
  return 0;
}
