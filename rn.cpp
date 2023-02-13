#include<iostream>
#include<conio.h>

// Define the sorting function
void sortArray(int arr[], int size)
{
  // Loop through the array and sort the elements in ascending order
  for (int i = 0; i < size - 1; i++)
  {
    for (int j = i + 1; j < size; j++)
    {
      if (arr[i] > arr[j])
      {
        // Swap the elements if the first element is greater than the second element
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}

// Use the sorting function in the main program
int main()
{
  // Define an array of integers
  int numbers[]={19,8,7,6,5};
  

  // Get the size of the array
  int size = sizeof(numbers) / sizeof(numbers[0]);

  // Sort the array using the sorting function
  sortArray(numbers, size);

  // Print the sorted array
  for (int i = 0; i < size; i++)
  {
    std::cout << numbers[i] << " ";
  }

  return 0;
}
