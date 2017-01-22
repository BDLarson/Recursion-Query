/******************************************************************************
//
// NAME:          Blake Larson
//
// HOMEWORK:      HW7b
//
// CLASS:         ICS 212
//
// INSTRUCTOR:    Ravi Narayan
//
// DATE:          November 5, 2016
//
// FILE:          main.c
//
// DESCRIPTION:   This file holds the main and costofpainting functions.
//
*****************************************************************************/

#include "header.h"

/******************************************************************************
// Function name: main
//
// DESCRIPTION:   This is the main function that is stricly test cases for
//                the cost of painting by specified length.
//
// Parameters:    None
//
// Return values: int (for now 0)
//
*****************************************************************************/

int main()
{
  printf("--------------Test Cases--------------\n");
  printf("The cost of painting -1 mile: $%d\n", costofpainting(-1));
  printf("The cost of painting 0 mile: $%d\n", costofpainting(0));
  printf("The cost of painting 1 mile: $%d\n", costofpainting(1));
  printf("The cost of painting 1.55 mile: $%d\n", costofpainting(1.55));
  printf("The cost of painting 2 mile: $%d\n", costofpainting(2));
  printf("The cost of painting 5 mile: $%d\n", costofpainting(5));
  printf("The cost of painting 6 mile: $%d\n", costofpainting(6));
  printf("The cost of painting 7 mile: $%d\n", costofpainting(7));
  printf("The cost of painting 9 mile: $%d\n", costofpainting(9));
  printf("The cost of painting 10 mile: $%d\n", costofpainting(10));
  printf("The cost of painting 20 mile: $%d\n", costofpainting(20));
  printf("--------------------------------------\n");

  return 0;
}

/******************************************************************************
// Function name: costofpainting
//
// DESCRIPTION:   This is the function determines the cost of painting for
//                the length passed in. Using a recursive call to itself,
//                the cost variable will accumulate a total number once a
//                base case of (>0 && <=2) is met. If the length is greater
//                than 2, then $100 is added to cost and then the length is
//                subdivided into 3 seperate painters.
//
// Parameters:    length - a double that specifies the length in miles of
//                         the paint job
//
// Return values: int - The total cost is returned
//
*****************************************************************************/

int costofpainting(double length)
{
  double cost;
  cost = 0.00;

  /* If length is zero miles */
  if(length == 0)
  {
    cost = 0.00;
  }

  /* If length is greater than 2 miles */
  else if(length > 2)
  {
    cost = cost + 100.00; /* 3 other painters set at 100 */
    cost = cost + costofpainting(length / 3);
    cost = cost + costofpainting(length / 3);
    cost = cost + costofpainting(length / 3);
  }

  /* The in-between of zero and 2 miles*/
  else if(length <= 2 && length > 0)
  {
    cost = cost + 200.00;
  }

  /* If length is just a negative number */
  else
  {
    cost = -1.00;
  }

  return cost;
}
