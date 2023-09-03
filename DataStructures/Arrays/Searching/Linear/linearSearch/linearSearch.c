
#include<stdio.h> 

int linearSearch(int[] givenArray, int searchValue)
{
  // Get the length of the given array
  int lengthArray = sizeof(givenArray)/sizeof(givenArray[0]);

  // Iterate over each item inside the array
  for(int index = 0; index < lengthArray; index++)
  {
    // Return the position where an item
    // is found
    if (givenArray[index] == searchValue)
      return index;
  }

  // The item is not found
  return -1;
}

/* Driver Code */
int main()
{
  int exampleArray[] = {4, 6, 9, 18, 24, 37, 42};
  int exampleValue = 24;

  int searchResult = linearSearch(exampleArray, exampleValue)

  if (searchResult == -1)
  {
    printf("Sorry! The item searched could not be found."); 
  }

  printf("The item searched was found in position: %d\n", searchResult);    
}