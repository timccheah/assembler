#include <stdio.h>
#include <stdlib.h>

int CalculateTotal(int);

int CalculateTotal(int x){
  if (n == 0 || n == 1)
    return n;
  else
    return (f(n-1) + f(n-2));
    }

}

int main() {
  int n, i = 0, c;
  printf("Enter the number of terms: ");
  scanf(" %d", &n);
  printf("Integer Sequence:\n");

  for (c = 1; c <= n; c++)  {
    printf("  %d", f(i));
    i++;
  }

  return 0;
}
