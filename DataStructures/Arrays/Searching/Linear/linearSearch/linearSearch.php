<?php

  function linearSearch($givenArray, $searchValue)
  {
    // Get the length of the given array
    $lengthArray =  count($givenArray);

    // Iterate over each item inside the array
    for ($index = 0; $index < $lengthArray; $index++)
    {
      // Return the position where an item
      // is found
      if ($givenArray[$index] == $searchValue)
        return $index;
    }

    // The item is not found
    return -1;
  }

  /* Driver Code */
  function main()
  {
    $exampleArray = array(4, 6, 9, 18, 24, 37, 42)
    $exampleValue = 37;

    $searchResult = linearSearch($exampleArray, $exampleValue)

    if ($searchResult == -1)
    {
      echo "Sorry! The item searched could not be found."
    } else 
    {
      echo "Search item was found in position:  ", $searchResult; 
    }
  }

  main();
?>