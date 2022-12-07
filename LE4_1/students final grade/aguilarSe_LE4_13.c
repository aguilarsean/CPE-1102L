/*============================================================================
 FILE        : aguilarSe_LE4_13.c
 AUTHOR      : Sean Karl Tyrese G. Aguilar
 DESCRIPTION : Determines the sudent's final grade and indicate whether it is
               passing or failing.
 COPYRIGHT   : 20 September 2022
 REVISION HISTORY
 Date:               By:             Description:
 22/09/22            SKTA            modified some comments
============================================================================*/
#include <stdio.h>

/*============================================================================
 FUNCTION    : main
 DESCRIPTION : Execute the main program
 ARGUMENTS   : mark1, mark2, mark3, mark4 - for storing the marks
               finalGrade - for storing the final grade calculated by a formula
 RETURNS     : int - exit codes
===========================================================================*/
int main()
{
    float mark1, mark2, mark3, mark4, finalGrade;

    // Asks for user input
    printf("Enter 1st Mark: ");
    scanf("%f", &mark1);
    printf("Enter 2nd Mark: ");
    scanf("%f", &mark2);
    printf("Enter 3rd Mark: ");
    scanf("%f", &mark3);
    printf("Enter 4th Mark: ");
    scanf("%f", &mark4);

    // Displays the inputted marks
    printf("1st Mark: %.0f\t2nd Mark: %.0f\t3rd Mark: %.0f\t4th Mark: %.0f", mark1, mark2, mark3, mark4);

    finalGrade = (mark1 + mark2 + mark3 + mark4) / 4; // Calculates to get the final grade

    if ((mark1 >= 0 && mark1 <= 100) && (mark2 >= 0 && mark2 <= 100) && (mark3 >= 0 && mark3 <= 100) && (mark4 >= 0 && mark4 <= 100)) // Determines if the final grade is greater than 100 to determine if the marks inputted are valid
    {
        if (finalGrade >= 50) // Determines if the final grade is a passing or failing remark
        {
            printf("\nFINAL GRADE: %.2f\tREMARKS : PASSED", finalGrade);
        }
        else
        {
            printf("\nFINAL GRADE: %.2f\tREMARKS : FAILED", finalGrade);
        }
    }
    else
    {
        printf("\nINVALID INPUT"); // Displays if marks are not from 0 to 100
    }
    return 0;
}