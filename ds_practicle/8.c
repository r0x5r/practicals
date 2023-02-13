#include <stdio.h>

int main() {
  int A[3][3], B[3][3], C[3][3];

  printf("Enter elements of matrix A:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      scanf("%d", &A[i][j]);
    }
  }

  printf("Enter elements of matrix B:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      scanf("%d", &B[i][j]);
    }
  }

  // initialize elements of matrix C to 0
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      C[i][j] = 0;
    }
  }

  // multiply matrices A and B and store result in matrix C
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 3; k++) {
        C[i][j] += A[i][k] * B[k][j];
      }
    }
  }

  printf("\nProduct of matrices A and B:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", C[i][j]);
    }
    printf("\n");
  }

  return 0;
}
