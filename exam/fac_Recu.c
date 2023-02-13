#include<stdio.h>
 int Num(int n); //function prototype
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, Num(n)); //function call
    return 0;
}

 int Num(int n) { //function defintion
    if (n>=1)
        return n*Num(n-1);
    else
        return 1;
}
