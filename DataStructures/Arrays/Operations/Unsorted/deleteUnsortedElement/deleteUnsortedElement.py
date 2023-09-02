from findElementPosition.py import findElementPosition

def deleteUnsortedElement(givenArray, deleteElement):
  lengthArray = len(givenArray)
  givenArray.remove(deleteElement)


def main():
  # A list of current toolkit prices
  exampleArray = [15.59, 10.99, 23.78, 15.99]
  # Declare value for selected price
  exampleValue = 23.78
  
  # Print each toolkit price in the array
  print("Customer Toolkit Prices (Today, 5:50pm): ") 
  print exampleArray
    
  # Print the toolkit prices list with new price
  updateArray = deleteUnsortedElement(exampleArray, exampleValue) 
  print("Customer Toolkit Prices (Today, 6:02pm): ") 
  print(updateArray) 

main()