#include <stdio.h>

int main() {
  int matrix[3][3];

  printf("Enter elements of 3x3 matrix:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }

  printf("\nUpper triangular matrix:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (i <= j) {
        printf("%d ", matrix[i][j]);
      } else {
        printf("  ");
      }
    }
    printf("\n");
  }

  return 0;
}
