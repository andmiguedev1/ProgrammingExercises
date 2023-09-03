  #
  # Algorithm
  #
  # Write a function that searchs for an element in the array.
  # Use an iterative approach and declare the following variables
  #
  # lowPointer: the start element in the array
  # lengthArray: how many elements are in the array
  # highPointer: the last element in the array
  #
  # Set the condition so that lowPointer does not exceed 
  # highPointer, then check if the element is within the range 
  # of lowPointer or highPointer. Otherwise the element is found
  # in the halfPointer. 
  # 
  # If the element is not found in the array, return -1;
  #

def iterativeBinarySearch(givenArray, searchValue):
  lowPointer = givenArray[0]
  lengthArray = len(givenArray)
  highPointer = lengthArray - 1

  # Repeat search operation until a condition is met
  while lowPointer <= highPointer: 
    # Formula to calculate halfPointer of any array size
    halfPointer = lowPointer + (highPointer - lowPointer) / 2; 
          
    # Check if searchValue is found in middle of array 
    if givenArray[halfPointer] == searchValue: 
      return halfPointer 
  
    # Check if searchValue is greater than halfPointer
    # Then compare every element on the right side
    if givenArray[halfPointer] < searchValue: 
      lowPointer = halfPointer + 1

    # Check if searchValue is less than halfPointer
    # Then compare every element on the left side
    if givenArray[halfPointer] > searchValue:
      highPointer = halfPointer - 1
      
  # searchValue is not found 
  return -1

# Driver Code 
def main()
  exampleArray = [ 3, 7, 12, 21, 28, 34 ]; 
  exampleValue = 28; 

  searchResult = iterativeBinarySearch(exampleArray, exampleValue); 

  if searchResult == -1:
    print "Sorry! Search item was not found in the array."
  else:
    print "Search item was found in position:  %d" % searchResult

main()