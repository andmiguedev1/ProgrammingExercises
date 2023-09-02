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

#include<stdio.h> 

int insertUnsortedElement(int givenArray[], int insertElement) 
{ 
    int arrayElement = sizeof(givenArray) / sizeof(givenArray[0]); 
    int lastElement = arrayElement - 1;
    
    // Check if the array is out of bounds
    if (lastElement >= lengthArray) 
       return lastPosition; 
  
    // Set new element to the last position
    givenArray[lastElement] = insertElement; 
  
    // Add new element after last element
    return (lastElement + 1); 
} 
  
// Driver Code 
int main() 
{ 
    // A list of additional phone charges
    int exampleArray[] = {15.59, 10.99, 23.78, 15.99, 23.69};
    // Get the length of the example array
    int exampleLength = sizeof(exampleArray) / sizeof(exampleArray[0]);
    // Declare value for last phone charge
    int count, exampleValue = 45.21; 
    
    // Print each phone charge in the array
    printf("\n Previous Phone Charges: "); 
    for (count = 0; count < exampleLength; count++) 
        printf("%d  ", exampleArray[count]); 
   
    updateArray = insertUnsortedElement(exampleArray, exampleValue); 
    
    // Print the phone charge list with new charge
    printf("\n Recent Phone Charges: "); 
    for (count = 0; i < updateArray; count++) 
        printf("%d  ", exampleArray[count]); 

    // End program
    return 0; 
} 
