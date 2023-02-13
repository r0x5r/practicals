#include <stdio.h>
int linears(int arr[], int element, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
        else
        {
            printf("number is not list\n");
        }
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5546, 56, 3, 346, 78, 90};
    int size = sizeof(arr) / sizeof(int);
    int element = 5546;
    int zoom = linears(arr, element, size);
    printf("the element of %d is %d", element, zoom);
    return 0;
}