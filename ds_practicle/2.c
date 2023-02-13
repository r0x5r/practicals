#include <stdio.h>

// function prototype
int findGreatest(int num1, int num2, int num3);

int main() {
  int num1, num2, num3, greatest;

  printf("Enter three numbers: ");
  scanf("%d%d%d", &num1, &num2, &num3);

  // function call
  greatest = findGreatest(num1, num2, num3);

  printf("Greatest number is: %d", greatest);

  return 0;
}

// function definition
int findGreatest(int num1, int num2, int num3) {
  int greatest;

  if (num1 > num2) {
    if (num1 > num3) {
      greatest = num1;
    } else {
      greatest = num3;
    }
  } else {
    if (num2 > num3) {
      greatest = num2;
    } else {
      greatest = num3;
    }
  }

  return greatest;
}
