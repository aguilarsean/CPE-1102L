/*============================================================================
 FILE        : aguilarSe_LE3_13.c
 AUTHOR      : Sean Karl Tyrese G. Aguilar
 DESCRIPTION : A program that prints the tuition for 2 semesters. It charges
               PHP 450 for registration, PHP 450 per unit, and a penalty of
               PHP 2,260 for each 12 units of fraction of 12.
 COPYRIGHT   : 07 September 2022
 REVISION HISTORY
 Date:               By:             Description:
 10 Sep 2022        SKTA            Modify documentation
 11 Sep 2022        SKTA            Added comments for documentation
============================================================================*/
#include <stdio.h>

// Define constants
#define REGISTRATION 450
#define UNIT 450
#define PENALTY 2260

/*============================================================================
 FUNCTION    : main
 DESCRIPTION : Execute the main program
 ARGUMENTS   : float numUnits - an array to store the number of units per sem
               float tuitionFee1 - for storing the 1st sem tuition
               float tuitionFee2 - for storing the 2nd sem tuition
               float totalTuitionFee - for storing the sum of tuitionFee1 and tuitionFee2
 RETURNS     : int - exit codes
===========================================================================*/
int main()
{
    float numUnits[] = {9, 24}, tuitionFee1, tuitionFee2, totalTuitionFee;

    // Display values of number of units in whole number
    printf("\n1st Semester Number of Units: %.0f", numUnits[0]);
    printf("\n2nd Semester Number of Units: %.0f", numUnits[1]);

    // Calculates the tuition fee each semester depending on the units and penalty
    tuitionFee1 = REGISTRATION + ((numUnits[0] / 12 * PENALTY) + (numUnits[0] * UNIT));
    tuitionFee2 = REGISTRATION + ((numUnits[1] / 12 * PENALTY) + (numUnits[1] * UNIT));

    // Display values of tuition fee each semester in 2 decimal places
    printf("\n1st Semester Tuition Fee    : %8.2f", tuitionFee1);
    printf("\n2nd Semester Tuition Fee    : %8.2f", tuitionFee2);

    // Calculates the total tuition fee
    totalTuitionFee = tuitionFee1 + tuitionFee2;

    // Display the total tution fee in 2 decimal places
    printf("\nTotal Tuiton Fee            : %8.2f", totalTuitionFee);
    return 0;
}