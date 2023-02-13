#include <stdio.h>

// function to swap values using call by reference
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  int x, y;

  printf("Enter two values to swap: ");
  scanf("%d%d", &x, &y);

  printf("\nBefore swapping: x = %d, y = %d", x, y);

  // swap values using call by reference
  swap(&x, &y);

  printf("\nAfter swapping: x = %d, y = %d", x, y);

  return 0;
}
