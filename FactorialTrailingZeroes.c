#include <stdio.h>
#include <stdlib.h>

int trailingZeroes(int n) {
  return (n == 0) ? 0 : n/5 + trailingZeroes(n/5);
}

int main() {
  int n;
  
  scanf("%d", &n);
  printf("There are %d zeroes in %d!\n", trailingZeroes(n), n);
}
