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
   int perimeter = 0;
   for (int i = 0; i < 4; i++)
   {
      for (int j = 0; j < 4; j++)
      {
         if (island[i][j] == 1)
         {
            if (i == 0)
            {
               perimeter = perimeter + 1;
            }
            else if (i == 4)
            {
               perimeter = perimeter + 1;
            }
            else if (j == 0)
            {
               perimeter = perimeter + 1;
            }
            else if (j == 0)
            {
               perimeter = perimeter + 1;
            }
            else if (island[i+1][j] == 0)
            {
               perimeter = perimeter + 1;
            }
            else if (island[i-1][j] == 0)
            {
               perimeter = perimeter + 1;
            }
            else if (island[i][j+1] == 0)
            {
               perimeter = perimeter + 1;
            }
            else if (island[i][j-1] == 0)
            {
               perimeter = perimeter + 1;
            }
         }
      }
   }
   return (perimeter);
}
