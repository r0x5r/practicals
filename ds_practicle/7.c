#include <stdio.h>

int main() {
  int matrix[3][3], sum = 0;

  printf("Enter elements of 3x3 matrix:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }

  // add diagonal elements
  for (int i = 0; i < 3; i++) {
    sum += matrix[i][i];
  }

  printf("Sum of diagonal elements: %d", sum);

  return 0;
}
