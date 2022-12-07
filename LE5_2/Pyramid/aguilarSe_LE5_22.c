/*============================================================================
 FILE        : aguilarSe_LE5_22.c
 AUTHOR      : Sean Karl Tyrese G. Aguilar
 DESCRIPTION :
 COPYRIGHT   : 7 October 2022
 REVISION HISTORY
 Date:               By:             Description:
============================================================================*/
#include <stdio.h>

/*============================================================================
 FUNCTION    : main
 DESCRIPTION : Execute the main program
 ARGUMENTS   : numCol - for storing and determining the number of columns
               col - for looping the number of columns
               space - for giving space when col is looped
               row - number of rows
               incdec - increment and decrement
 RETURNS     : int - exit codes
===========================================================================*/
int main()
{
    int numCol, num = 1, incdec = 1;

    // Asks for the number of column for the pyramid
    printf("Enter a value for N: ");
    scanf("%d", &numCol);

    for (int col = 1; col <= numCol; col++) // Determines when to stop the column
    {

        for (int space = 1; space <= numCol - col; space++) // Determines how many space for the number in the column
        {
            printf(" ");
        }

        for (int row = 1; row <= 2 * col - 1; row++) // Determines the row
        {
            printf("%d", num);
            if (row == col)
                incdec = 0;
            ((incdec == 1) ? (num++) : (num--)); // For incrementing and decrementing
        }

        // Reinitializing to its default value
        incdec = 1;
        num = 1;
        printf("\n");
    }
}