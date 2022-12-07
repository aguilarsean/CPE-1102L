/*============================================================================
 FILE        : aguilarSe_LE5_23.c
 AUTHOR      : Sean Karl Tyrese G. Aguilar
 DESCRIPTION : Program that will display the 1-N value of the Fibonnaci Sequence
 COPYRIGHT   : 7 October 2022
 REVISION HISTORY
 Date:               By:             Description:
============================================================================*/
#include <stdio.h>

/*============================================================================
 FUNCTION    : main
 DESCRIPTION : Execute the main program
 ARGUMENTS   : limit - for when to stop in displaying the nth term of the sequence
               nth1 - first term of the fibonnaci and for storing the next terms
               nth2 - second term of the fibonnaci and for storing the next terms
               nt3 - for storing the next terms
 RETURNS     : int - exit codes
===========================================================================*/
int main()
{
    int limit, nth1 = 1, nth2 = 1, nth3;

    printf("Enter limit: ");
    scanf("%d", &limit);
    printf("Fibonacci sequence: %d %d ", nth1, nth2);

    for (int i = 2; i < limit; ++i) // Starts at 2 since nth1 = 1 and nth2 = 1 are displayed already
    {
        nth3 = nth1 + nth2; // Adding 2 terms to get the next term
        printf("%d ", nth3);
        nth1 = nth2; // Initializing the variable with different value of term
        nth2 = nth3; // Initializing the variable with different value of term
    }
    return 0;
}