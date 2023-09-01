
# Algorithm
#
# Write a function that searchs an array of items, by checking
# if the search value is found on the left or right side of the
# array. 
# 
# Once a side has been chosen, keep checking using the same 
# comparison, until the search value is found. 
#
# Otherwise, return not found if there are not elements to check

def recursiveBinarySearch(givenArray, lowPointer, highPointer, searchKey): 
  # Divide the array in half for each comparison
  halfPointer = (lowPointer + highPointer) / 2
  
  # There are no elements to compare, 
  # so the result is not found
  if (highPointer < lowPointer): 
    return -1

  # A match has been found for the searchkey  
  if (searchKey == givenArray[int(halfPointer)]): 
    return halfPointer 
  
  # Check if the searchKey is greater than the highPointer 
  if (searchKey > givenArray[int(halfPointer)]):   
    return recursiveBinarySearch(givenArray, (halfPointer + 1), highPointer, searchKey) 
  
  # Check if the searchKey is less than the highPointer
  return (recursiveBinarySearch(givenArray, lowPointer, (halfPointer - 1), searchKey)) 

def main():
  exampleArray = [27, 12, 128, 45, 537, 256, 4, 79] 
  exampleLength = len(exampleArray) 
  exampleValue = 4

  searchResult = int(recursiveBinarySearch(givenArray, 0, exampleLength, searchKey))

  if searchResult == -1: 
    print ("Sorry! Search item was not found in the array.")
  else: 
    print ("Search item was found in position: " + str(searchResult))   

main()