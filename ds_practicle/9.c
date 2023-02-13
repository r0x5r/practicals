#include <stdio.h>

int main() {
  int matrix[3][3], sum = 0;

  printf("Enter elements of 3x3 matrix:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      scanf("%d", &matrix[i][j]);
      sum += matrix[i][j];
    }
  }

  printf("\nMatrix:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }

  printf("\nSum of all elements: %d", sum);

  return 0;
}
