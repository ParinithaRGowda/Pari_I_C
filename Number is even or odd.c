#include <stdio.h>

int main(void) {
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  if (num % 2 == 0) {
    printf("%d is even", num);
  }
  else
  {
    pritnf("%d is odd", num);
  }
}