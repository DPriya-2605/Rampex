#include <stdio.h>

int main() {
  int n;
  printf("Enter the value of n:");
  scanf("%d",&n);
  if(n%5==0&&n%11==0)
  {
    printf("It is divisible");
  }
  else
  {
    printf("Not divisible");
  }
}