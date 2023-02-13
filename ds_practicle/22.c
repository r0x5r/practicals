#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 101

// Stack structure
struct Stack
{
    int top;
    int data[MAX_SIZE];
};

// Function to create an empty stack
struct Stack* createStack()
{
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->top = -1;
    return stack;
}

// Function to check if the stack is empty
int isEmpty(struct Stack* stack)
{
    return stack->top == -1;
}

// Function to check if the stack is full
int isFull(struct Stack* stack)
{
    return stack->top == MAX_SIZE - 1;
}

// Function to push an element onto the stack
void push(struct Stack* stack, int element)
{
    if (isFull(stack))
    {
        printf("Error: stack overflow\n");
        return;
    }

    stack->top++;
    stack->data[stack->top] = element;
    printf("%d pushed to stack\n", element);
}

// Function to pop an element from the stack
int pop(struct Stack* stack)
{
    if (isEmpty(stack))
    {
        printf("Error: stack underflow\n");
        return -1;
    }

    int element = stack->data[stack->top];
    stack->top--;
    return element;
}

// Function to traverse the stack and print its elements
void traverse(struct Stack* stack)
{
    if (isEmpty(stack))
    {
        printf("Error: stack is empty\n");
        return;
    }

    printf("Stack elements: ");
    for (int i = 0; i <= stack->top; i++)
        printf("%d ", stack->data[i]);
    printf("\n");
}

// Driver program to test above functions
int main()
{
    struct Stack* stack = createStack();

    push(stack, 10);
    push(stack, 20);
    push(stack, 30);

    traverse(stack);

    printf("%d popped from stack\n", pop(stack));
    printf("%d popped from stack\n", pop(stack));

    traverse(stack);

    return 0;
}
