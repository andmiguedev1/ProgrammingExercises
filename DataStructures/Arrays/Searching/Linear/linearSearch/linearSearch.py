def linearSearch(givenArray, searchValue):
  # Get the length of the given array
  lengthArray = len(givenArray)

  # Iterate over each item inside the array
  for index in range(lengthArray):
    # Return the position where an item
    # is found
    if givenArray[index] == searchValue:
      return index

  # The item is not found
  return -1

# Driver Code
def main():
  exampleArray = [4, 6, 9, 18, 24, 37, 42]  
  exampleValue = 37

  searchResult = int(linearSearch(exampleArray, exampleValue))

  if searchResult == -1:
    print ("Sorry! The item searched could not be found.")
  else
    print ("Search item was found in position: " + str(searchResult))

main()