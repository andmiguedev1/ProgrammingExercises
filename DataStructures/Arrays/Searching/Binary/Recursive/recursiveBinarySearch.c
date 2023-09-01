/**
* Algorithm
*
* Write a function that searchs an array of items, by checking
* if the search value is found on the left or right side of the
* array. 
* 
* Once a side has been chosen, keep checking using the same 
* comparison, until the search value is found. 
*
* Otherwise, return not found if there are not elements to check
*/

#include<stdio.h> 
  
int recursiveBinarySearch(int givenArray[], int lowPointer, int highPointer, int searchKey) 
{ 
    // Divide the array in half for each comparison
    int halfPointer = (lowPointer + highPointer) / 2;
  
    // There are no elements to compare, 
    // so the result is not found  
    if (highPointer < lowPointer) 
      return -1; 
  
    // A match has been found for the searchkey
    if (searchkey == givenArray[halfPointer]) 
      return halfPointer; 

    // Check if the searchKey is greater than the highPointer   
    if (searchKey > givenArray[halfPointer]) 
       return recurisiveBinarySearch(givenArray, (halfPointer + 1), highPointer, searchKey); 
    
    // Check if the searchKey is less than the highPointer
    return recursiveBinarySearch(givenArray, lowPointer, (halfPointer - 1), searchKey); 
} 
  
/* Driver Code */
int main() 
{ 
  int exampleArray[] = {27, 12, 128, 45, 537, 256, 4, 79};   
  int exampleLength = sizeof(exampleArray)/sizeof(exampleArray[0]); 
  int exampleValue = 4; 

  int searchResult = recurisiveBinarySearch(exampleArray, 0, exampleLength, exampleValue)

  if (searchResult == -1)
  {
    printf("Sorry! Search item was not found in the array."); 
  }
  
  printf("Search item was found in position: %d\n", searchResult); 
  
  return 0; 
} 