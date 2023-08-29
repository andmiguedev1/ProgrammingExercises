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

#include<stdio.h> 
  
int findElementPosition(int givenArray[], int lengthArray,  
                int findElement) 
{ 
  // Traverse through the array
    for (int count = 0; count < lengthArray; count++) 
        if (givenArray[count] == findElement) 
            return count; 

    return -1; 
} 
  
// Driver Code 
int main() 
{ 
    // A list of monthly expenses as an array
    int exampleArray[] = {12.95, 120.00, 56.99, 115.00, 256.00};
    // Formula to get the length of any array 
    int exampleLength = sizeof(monthlyExpenses) / sizeof(monthlyExpenses[0]); 
    // Find any expense value inside an array
    int exampleValue = 115.00;

    // Call the linear search function and store the result 
    int resultSearch = findElementPosition(exampleArray, exampleLength, exampleValue); 
  
    if (resultSearch == - 1) 
        printf("Sorry! The given expense you are searching was not found."); 
    else
        printf("Search results: Expense was found on: %d", position); 
  
    return 0; 
} 
