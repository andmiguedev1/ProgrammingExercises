/**
* Exercise
*
* Write a function that given a list of monthly expenses, finds
* the exact place where is located. Otherwise return -1, if its
* not found.
*
* Example: int Expenses[] = {12.95, 120.00, 56.99, 115.00} 
*
*/

using System; 
  
class Finding 
{ 
    static int findElementPosition(int[] givenArray, int lengthArray,  
                           int findELement) 
    { 
        for (int count = 0; count < lengthArray; count++) 
            if (givenArray[count] == findELement) 
                return count; 
      
        return -1; 
    } 
      
    // Driver Code 
    public static void Main() 
    { 
        // A list of monthly expenses as an array
        int[] exampleArray = {12.95, 120.00, 56.99, 115.00, 256.00}; 
        // Formula to get the length of any array
        int exampleLength = arr.Length; 
        // Find any expense value inside an array   
        int exampleValue = 56.99; 

        // Call the linear search function and store the result
        int searchPosition = findElementPosition(exampleArray, exampleLength, exampleValue); 
      
        if (searchPosition == - 1) 
          Console.WriteLine("Sorry! The given expense you are searching was not found."); 
        else
          Console.WriteLine("Search results: Expense was found on: " + (position)); 
    } 
} 