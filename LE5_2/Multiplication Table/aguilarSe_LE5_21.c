/*============================================================================
 FILE        : aguilarSe_LE5_21.c
 AUTHOR      : Sean Karl Tyrese G. Aguilar
 DESCRIPTION : Asks the user to input the number of rows and columns the table
               should have and display the multiplication table on screen.
 COPYRIGHT   : 7 October 2022
 REVISION HISTORY
 Date:               By:             Description:
============================================================================*/
#include <stdio.h>

/*============================================================================
 FUNCTION    : main
 DESCRIPTION : Execute the main program
 ARGUMENTS   : num - for storing and determining num of rows and cols
 RETURNS     : int - exit codes
===========================================================================*/
int main()
{
    int numRow, numCol;

    // Asks for number of row/s and columns/
    printf("Enter number of row/s    : ");
    scanf("%d", &numRow);
    printf("Enter number of column/s : ");
    scanf("%d", &numCol);

    printf("\nMultiplication table of %d by %d \n", numRow, numCol);
    for (int col = 1; col <= numCol; col++) // Determines when to stop the column
    {
        for (int row = 1; row <= numRow; row++) // Determines when to stop the row
        {
            printf("%d\t", col * row); // Calculate the values on each row and column
        }
        printf("\n");
    }
}