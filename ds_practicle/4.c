#include <stdio.h>

int main() {
  char str1[100], str2[100];
  int i, j;

  printf("Enter first string: ");
  gets(str1);

  printf("Enter second string: ");
  gets(str2);

  // find length of str1
  for (i = 0; str1[i] != '\0'; i++);

  // find length of str2
  for (j = 0; str2[j] != '\0'; j++);

  if (i > j) {
    printf("String 1 is longer than String 2");
  } else if (i < j) {
    printf("String 2 is longer than String 1");
  } else {
    printf("Both strings are of equal length");
  }

  return 0;
}
