#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 101

// Queue structure
struct Queue
{
    int front, rear;
    int data[MAX_SIZE];
};

// Function to create an empty queue
struct Queue* createQueue()
{
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->front = queue->rear = -1;
    return queue;
}

// Function to check if the queue is empty
int isEmpty(struct Queue* queue)
{
    return queue->front == -1;
}

// Function to check if the queue is full
int isFull(struct Queue* queue)
{
    return queue->rear == MAX_SIZE - 1;
}

// Function to insert an element into the queue
void insert(struct Queue* queue, int element)
{
    if (isFull(queue))
    {
        printf("Error: queue overflow\n");
        return;
    }

    queue->rear++;
    queue->data[queue->rear] = element;
    if (queue->front == -1)
        queue->front = queue->rear;
    printf("%d inserted into queue\n", element);
}

// Function to delete an element from the queue
int delete(struct Queue* queue)
{
    if (isEmpty(queue))
    {
        printf("Error: queue underflow\n");
        return -1;
    }

    int element = queue->data[queue->front];
    if (queue->front == queue->rear)
        queue->front = queue->rear = -1;
    else
        queue->front++;
    return element;
}

// Function to display the elements of the queue
void display(struct Queue* queue)
{
    if (isEmpty(queue))
    {
        printf("Error: queue is empty\n");
        return;
    }

    printf("Queue elements: ");
    for (int i = queue->front; i <= queue->rear; i++)
        printf("%d ", queue->data[i]);
    printf("\n");
}

// Driver program to test above functions
int main()
{
    struct Queue* queue = createQueue();

    insert(queue, 10);
    insert(queue, 20);
    insert(queue, 30);

    display(queue);

    printf("%d deleted from queue\n", delete(queue));
    printf("%d deleted from queue\n", delete(queue));

    display(queue);

    return 0;
}
