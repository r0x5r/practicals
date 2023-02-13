#include <stdio.h>
#include <conio.h>
int main()
{
    int stack[5], top = -1;
    void push()
    {
        int item;
        if (top > 4)
        {
            printf("enter the nu.");
            scanf("%d", &item);
            top = top + 1;
            stack[top] = item;
        }
        else
        {
            printf("stack overflow");
        }
        getch();
    }
}