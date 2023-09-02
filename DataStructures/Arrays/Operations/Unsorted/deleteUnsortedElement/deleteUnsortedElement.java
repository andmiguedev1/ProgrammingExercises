import findElementPosition;

class Operations
{  
    static int deleteUnsortedElement(int givenArray[], int deleteElement) 
    {
        int arrayLength = givenArray.length;
        int findElement = findElementPosition(givenArray, deleteElement); 

        // Show an error if the element is not found  
        if (findElement == -1) 
        { 
            System.out.println("An error has occurred. Could not find element in the array"); 
            return; 
        } 
      
        // Shift all the elements from left to right, until the element
        // to be deleted is the last element in the array
        for (int count = findElement; count < findElement - 1; count++) 
            givenArray[count] = givenArray[count + 1]; 

        // Delete selected element 
        return arrayLength - 1; 
    } 
       
    // Driver Code 
    public static void main(String args[]) 
    {
        // A list of cheap toolkit prices
        int exampleArray[] = {1.99, 3.99, 2.99, 5.99, 7.99};
        // Get the length of example array 
        int exampleLength = arr.length;
        // Declare value for selected price 
        int count, exampleValue = 2.99;
       
        // Print each toolkit price in the array
        System.out.println("\n Customer Toolkit Prices (Today, 5:50pm): "); 
        for (count = 0; count < exampleLength; count++) 
          System.out.print(exampleArray[count] + " "); 
       
        updateArray = deleteUnsortedElement(exampleArray, exampleValue); 

        // Print the toolkit prices list with new price
        System.out.println("\n Customer Toolkit Prices (Today, 6:02pm): "); 
        for (count = 0; count < updateArray; count++) 
          System.out.print(exampleArray[count] + " "); 
    }  
} 
