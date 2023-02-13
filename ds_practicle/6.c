#include <stdio.h>

int main() {
  char str[100], reverse[100];
  int i, j, length = 0;

  printf("Enter a string: ");
  gets(str);

  // find length of string
  for (i = 0; str[i] != '\0'; i++) {
    length++;
  }

  // store reverse of string in reverse array
  for (i = 0, j = length - 1; i < length; i++, j--) {
    reverse[i] = str[j];
  }

  // terminate reverse string with null character
  reverse[i] = '\0';

  printf("Reverse of the string: %s", reverse);

  return 0;
}
