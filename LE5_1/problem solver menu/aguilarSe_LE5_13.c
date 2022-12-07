/*============================================================================
 FILE        : aguilarSe_LE5_11.c
 AUTHOR      : Sean Karl Tyrese G. Aguilar
 DESCRIPTION : Program that lets the user choose an operation (power problem
               solver, factorial problem solver, or finding roots for quadratic
               equations using quadratic formula) from the menu.
 COPYRIGHT   : 28 September 2022
 REVISION HISTORY
 Date:               By:             Description:
============================================================================*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*============================================================================
 FUNCTION    : main
 DESCRIPTION : Execute the main program
 ARGUMENTS   : num - for selecting problem solver menu number
               n - Factoriral number storing
               base - for base number for power problem
               power - for power number for power problem
               a, b, c - coefficients for quadratic equation
               x - discriminants
               x1, x2 - for real roots
               factorial - result of the factorial problem
 RETURNS     : int - exit codes
===========================================================================*/
int main()
{
    int num, n;
    double base, power, result, a, b, c, x;
    unsigned long long factorial = 1;

    while (1)
    {
        // Displaying the menu and getting user input
        printf("\n\n------ Problem Solver Menu ------\n\n");
        printf("1. Power problem solver\n");
        printf("2. Factorial problem solver\n");
        printf("3. Finding roots for quadratic equations using quadratic formula\n");
        printf("4. Exit\n\n");
        scanf("%d", &num);

        // Executing the program based on the user selected number on the menu
        switch (num)
        {
        case 1:
            printf("Enter the base number: ");
            scanf("%lf", &base);
            printf("Enter the power raised: ");
            scanf("%lf", &power);
            result = pow(base, power);
            printf("%.2lf^%.2lf = %.2lf", base, power, result);
            break;

        case 2:

            printf("Enter a number: ");
            scanf("%d", &n);

            // Display error if the user enters a negative integer
            if (n < 0)
                printf("Error! Factorial of a negative number doesn't exist.");
            else
            {
                for (int i = 1; i <= n; ++i)
                {
                    factorial *= i;
                }
                printf("Factorial of %d = %llu", n, factorial);
                factorial = 1;
                break;
            }

        case 3:

            printf("Enter coefficients a, b and c: ");
            scanf("%lf %lf %lf", &a, &b, &c);

            x = ((b * b) - (4 * a * c)); // Calculates the root using the formula

            if (a == 0)
            {
                if (b == 0)
                {
                    printf("No solution"); // Displays no solution if both a and b are zero
                }
                else
                {
                    printf("There is only one root %.2lf", (-c / b)); // Display the one root
                }
            }
            else if (x < 0) // Proceed to this condition If ans is less than 0 and both a and b are non zero
            {
                printf("There are no real roots");
            }
            else // If the values and answers does not satisfy the condition above, it proceeds to run this condition
            {
                double x1, x2;

                // Calculates x1 and x2 using the formula
                x1 = (-b + sqrt(x)) / (2 * a);
                x2 = (-b - sqrt(x)) / (2 * a);

                printf("The real roots are %.2lf %.2lf", x1, x2);
            }
            break;

        case 4:
            exit(0);
        }
    }
    return 0;
}