#include <stdio.h>

int main() {

  int n, reverse = 0, remainder ,temp;
  
  //temp=n; -won't work
 
  printf("Enter an integer: ");
  scanf("%d", &n);
  
  temp=n; //as n value becomes o at line 18(can skip this if 17 and 18 are changed)
  
  while (n != 0) {

    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n = n/10;
    
  }
       if (reverse==temp){
           printf("%d is palindrome",temp);
       }
    else{
        printf("%d is not palindrome",temp);
    }


  return 0;
}
