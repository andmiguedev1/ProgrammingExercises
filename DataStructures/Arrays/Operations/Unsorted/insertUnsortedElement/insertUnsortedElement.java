/**
* Exercise
*
* Write a function that given a list of phone charges, add a new
* phone charge at the end of the array. 
* 
* 1. Then print all the phone charges as a list
* 2. Print the phone charges list with new charge
*
*/
  
class Operations
{   
    static int insertUnsortedElement(int givenArray[], int insertElement) 
    {
      int arrayLength = givenArray.length; 
      int lastElement = arrayLength - 1;

      // Check if the array is out of bounds
      if (lastElement >= arrayLength)
        return lastElement; 
       
      // Set new element to the last position
      givenArray[lastElement] = insertElement; 
      // Add new element after last element
      return (lastElement + 1); 
    } 
       
    // Driver Code 
    public static void main (String[] args) 
    {    
        // A list of additional phone charges
        int[] exampleArray = [15.59, 10.99, 23.78, 15.99];
        // Get length of the example array 
        int exampleLength = exampleArray.length; 
        // Declare value for last phone charge
        int count, exampleValue = 45.99; 
       
        System.out.print("\n Previous Phone Charges:"); 
        // Print each phone charge in the array
        for (count = 0; count < exampleLength; count++) 
            System.out.print(exampleArray[count] + " "); 
       
        updateArray = insertUnsortedElement(exampleArray, exampleValue); 
       
        // Print the phone charge list with new charge
        System.out.print("\n Recent Phone Charges:"); 
        for (count = 0; count < updateArray; count++) 
            System.out.print(exampleArray[count] + " "); 
    } 
} 
