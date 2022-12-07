/*============================================================================
 FILE        : aguilarSe_LE4_12.c
 AUTHOR      : Sean Karl Tyrese G. Aguilar
 DESCRIPTION : Computes the real roots of a quadratic equation.
 COPYRIGHT   : 20 September 2022
 REVISION HISTORY
 Date:               By:             Description:
============================================================================*/
#include <stdio.h>
#include <math.h>

/*============================================================================
 FUNCTION    : main
 DESCRIPTION : Execute the main program
 ARGUMENTS   : a, b, c - for storing the values for the quadratic equation
               x - for storing the answer used by the quadratic formula
 RETURNS     : int - exit codes
===========================================================================*/
int main()
{
    int a, b, c, x;

    // Asks for the input
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the value of c: ");
    scanf("%d", &c);

    x = ((b * b) - (4 * a * c)); // Calculates the root using the formula

    if (a == 0)
    {
        if (b == 0)
        {
            printf("No solution"); // Displays no solution if both a and b are zero
        }
        else
        {
            printf("There is only one root %d", (-c / b)); // Display the one root
        }
    }
    else if (x < 0) // Proceed to this condition If ans is less than 0 and both a and b are non zero
    {
        printf("There are no real roots");
    }
    else // If the values and answers does not satisfy the condition above, it proceeds to run this condition
    {
        float x1, x2;

        // Calculates x1 and x2 using the formula
        x1 = (-b + sqrt(x)) / (2 * a);
        x2 = (-b - sqrt(x)) / (2 * a);

        printf("The real roots are %.2f %.2f", x1, x2);
    }
    return 0;
}