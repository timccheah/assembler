#include <stdio.h>
#include <stdlib.h>

int CalculateTotal(int);

int CalculateTotal(int x){
  if (x == 0 || x == 1) {
    return x;
  } else {
    return (CalculateTotal(x-1) + CalculateTotal(x-2));
  }
}


int main() {
    int number;
    int i = 0;
    int c;
    printf("How large(in numbers) would you like your sequence to be? ");
    scanf(" %d", &number);
    printf("Integer Sequence: \n");

    while (i < number) {
        printf("  %d", CalculateTotal(i));
        i++;
    }
  return 0;
}
