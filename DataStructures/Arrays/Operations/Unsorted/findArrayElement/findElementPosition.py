#
# Exercise
#
# Write a function that given a list of monthly expenses, finds
# the exact place where is located. Otherwise return -1, if its
# not found.
#
# Example: int Expenses[] = {12.95, 120.00, 56.99, 115.00} 
#
  
def findElementPosition(givenArray, lengthArray, findElement): 
    # Traverse through the array
    for count in range (lengthArray): 
        if (givenArray[count] == findElement): 
            return count 
    return -1
   
def main():
  # A list of monthly expenses as an array
  exampleArray = [12.95, 120.00, 56.99, 115.00, 256.00] 
  # Formula to get the length of any array 
  exampleValue = 120.00  
  # Find any expense value inside an array 
  exampleLength = len(exampleArray) 

  # Call the linear search function and store the result  
  searchPosition = findElementPosition(exampleArray, exampleLength, exampleValue) 
  
  if searchPosition == -1: 
    print ("Sorry! The given expense you are searching was not found.")
  else: 
    print ("Search item was found in position: " + str(searchPosition))   

main()