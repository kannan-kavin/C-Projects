/*Complete the function below
* This file will not have a main function. DO NOT ADD ONE.
* Type the next 2 commands in your terminal:
* make islandmain
* ./islanmain
* You can use different test islands to see if your function works.
* To use different test islands, give input -1, -2, -3, -4
*/


#include <cs50.h>
#include <stdio.h>

#include "island.h"

int mapping(int island[5][5])
{
   //YOUR CODE GOES HERE...and HERE ONLY!!!
   int perimeter = 0
   for (x = 0; x < 4; x++)
   {
      if (island[x][0] == 1)
      {
         perimeter = perimeter + 1
      }
   }
}
