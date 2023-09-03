/**
* Algorithm
*
* Write a function that searchs for an element in the array.
* Start with leftmost element in the array, and one by one
* compare searchValue with each element in the array.
*
* Check if searchValue matches an element in the array, then
* return its position. Otherwise if its not found, return -1
* 
*/

using System;

static int linearSearch(int[] givenArray, int searchValue)
{
  // Get the length of the given array
  int lengthArray = givenArray.Length;

  // Iterate over each item inside the array
  for (int index = 0; index < lengthArray; index++)
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
public static void Main()
{
  int[] exampleArray = {4, 6, 9, 18, 24, 37, 42};
  int exampleValue = 37;

  int searchResult = linearSearch(exampleArray, exampleValue);

  if (searchResult == -1)
  {
    Console.WriteLine("Sorry! The item searched could not be found");
    Console.ReadKey();
  }

  Console.WriteLine("Search item was found in position: " + searchResult); 
}