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
  
using System; 
  
class Operations 
{ 
      
    // Function to insert a given   
    static int insertArrayElement(int[] givenArray, int insertElement) 
    { 
        int arrayLength = givenArray.Length;
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
    public static void Main () 
    {  
        // A list of additional phone charges
        int[] exampleArray = [15.59, 10.99, 23.78, 15.99];
        // Get the length of the example array  
        int exampleLength = exampleArray.Length
        // Declare value for last phone charge 
        int count, exampleValue = 45.99; 
      
        // Print each phone charge in the array
        Console.Write("\n Previous Phone Charges:"); 
        for (count = 0; count < exampleLength; count++) 
            Console.Write(exampleArray[count] + " "); 
            Console.WriteLine(); 
      
        updateArray = insertArrayElement(exampleArray, exampleValue); 

        // Print the phone charge list with new charge 
        Console.Write("\n Recent Phone Charges:"); 
        for (count = 0; count < updateArray; count++) 
            Console.Write(exampleArray[count] + " ");             
    } 
} 