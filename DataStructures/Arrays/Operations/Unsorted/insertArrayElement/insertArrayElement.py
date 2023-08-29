#
# Exercise
#
# Write a function that given a list of phone charges, add a new
# phone charge at the end of the array. 
# 
# 1. Then print all the phone charges as a list
# 2. Print the phone charges list with new charge
#
#
  
def insertArrayElement(givenArray, insertElement): 
    givenArray.append(insertElement) 
  
def main():
  # A list of additional phone charges
  exampleArray = [15.59, 10.99, 23.78, 15.99]
  # Declare value for last phone charge 
  exampleValue = 45.99

  # Print each phone charge in the array 
  print("Previous Phone Charges:") 
  print(exampleArray) 
    
  # Print the phone charge list with new charge
  updateArray = insertArrayElement(exampleArray, exampleValue) 
  print("Recent Phone Charges: ") 
  print(updateArray) 

main()