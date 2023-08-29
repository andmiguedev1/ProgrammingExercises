<?php 

function findElementPosition($givenArray, $lengthArray, $findElement) 
{  
    for ($count = 0; $count < $lengthArray; $count++) 
        if ($givenArray[$count] == $findElement) 
            return $count; 
  
    return -1; 
} 
  
// Driver Code 
function main()
{
  // A list of monthly expenses as an array
  $exampleArray = array(12, 34, 10, 6, 40);
  // Formula to get the length of any array 
  $exampleLength = sizeof($givenArray); 
  // Find any expense value inside an array  
  $exampleValue = 40; 

  // Call the linear search function and store the result
  $searchPosition = findElementPosition($exampleArray, $exampleLength, $exampleValue); 
    
  if ($searchPosition == - 1) 
      echo("Sorry! The given expense you are searching was not found."); 
  else
      echo("Search results: Expense was found on: " . ($position)); 
}

main();