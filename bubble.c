#include <stdio.h>
void bubblesort(int arr[], int size)
{
    for (int step = 0; step < size - 1; ++size)
    {
        for (int i = 0; i < size - step - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
    void printarr(int arr[], int size)
    {
        for (int i = 0; i < size; i++)
        {
            printf("%d", arr[i]);
        }
        printf("\n");
    }
    int main()
    {
        int data[] = {-2, 45, 0, 11, -9};
        int size = sizeof(data) / sizeof(data[o]);
        bubblesort(data, size);
    }
}