
class Operations
{
  static int linearSearch(int[] givenArray, int searchValue)
  {
    // Get the length of the given array
    int lengthArray = givenArray.length;

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
}

/* Driver Code */
public static void main (String[] args)
{
  int exampleArray[] = {4, 6, 9, 18, 24, 37, 42};
  
  int exampleValue = 37;

  int searchResult = linearSearch(exampleArray, exampleValue);

  if (searchResult == -1)
  {
    System.out.println("Sorry! The item searched could not be found.")
  }

   System.out.println("Search item was found in position: " + searchResult);   
}
