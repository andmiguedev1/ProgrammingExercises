/**
* Exercise
*
* Write a function that given a list of toolkit prices,
* delete an existing toolkit item, after that item is
* found inside the array.
* 
* Write a main function that do the following:
*
* 1. Print current toolkit prices 
* 2. Print current toolkit prices after deletion
* 
* Hint: Called a previous function to find an element
*
*/

#include "findElementPosition.c"

int deleteArrayElement(int givenArray[], int deleteElement)
{
  int arrayLength = sizeof(givenArray) / sizeof(givenArray[0]);
  
  findElement = findElementPosition(givenArray, deleteElement)

  // Show an error if the element is not found
  if (findElement == -1)
    printf("An error has occurred. Could not find element in the array");
    return;  
  
  // Shift all the elements from left to right, until the element
  // to be deleted is the last element in the array 
  for (int count = findElement; count < arrayLength - 1; count++)
    givenArray[count] = givenArray[count + 1];

  // Delete selected element 
  return lengthArray - 1;  
}

// Driver Code
int main()
{
    // A list of cheap toolkit prices
    int exampleArray[] = {1.99, 3.99, 2.99, 5.99, 7.99};
    // Get the length of the example array
    int exampleLength = sizeof(exampleArray) / sizeof(exampleArray[0]);
    // Declare value for selected price
    int count, exampleValue = 2.99;

    // Print each toolkit price in the array
    printf("\n Customer Toolkit Prices (Today, 5:50pm): "); 
    for (count = 0; count < exampleLength; count++) 
        printf("%d  ", exampleArray[count]);

    updateArray = deleteArrayElement(exampleArray, exampleValue)

    // Print the toolkit prices list with new price
    printf("\n Customer Toolkit Prices (Today, 6:02pm): "); 
    for (count = 0; i < updateArray; count++) 
        printf("%d  ", exampleArray[count]);

    // End program
    return 0;            
}

