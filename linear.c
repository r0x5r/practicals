#include <stdio.h>
int linearsearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
        else
        {
            printf("number is not in list\n");
        }
    }

    return 0;
}
// int binarys(int arr[], int size, int element)
// {
//     int low, mid, high;
//     while (low <= high)
//     {
//         mid = (low + high) / 2;
//         if (arr[mid] == element)
//         {
//             if (arr[mid] < element)
//             {
//                 low = mid + 1;
//             }
//             else
//             {
//                 high = mid - 1;
//             }
//         }
//     }
    int main()
    {
        int arr[] = {1, 2, 3, 4, 5546, 56, 3, 346, 78, 90};
        int size = sizeof(arr) / sizeof(int);
        int element = 90;
        // int searcindex = linearsearch(arr, size, element);
        // printf("the elment of %d was found at index %d\n", element, searcindex);
        int zoom= linearsearch(arr, size, element);
        printf("the elment of %d was found at index %d\n", element, zoom);
        return 0;
    }

