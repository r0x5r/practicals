#include <stdio.h>

int main() {
  double num1, num2;
  char operation;

  printf("Enter first number: ");
  scanf("%lf", &num1);

  printf("Enter second number: ");
  scanf("%lf", &num2);

  printf("Enter operation (+, -, *, /): ");
  scanf(" %c", &operation);

  switch (operation) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", num1, num2, num1 + num2);
      break;

    case '-':
      printf("%.1lf - %.1lf = %.1lf", num1, num2, num1 - num2);
      break;

    case '*':
      printf("%.1lf * %.1lf = %.1lf", num1, num2, num1 * num2);
      break;

    case '/':
      printf("%.1lf / %.1lf = %.1lf", num1, num2, num1 / num2);
      break;

    // operator doesn't match any case constant (+, -, *, /)
    default:
      printf("Error! operator is not correct");
  }

  return 0;
}
