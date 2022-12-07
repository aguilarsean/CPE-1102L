/*============================================================================
 FILE        : aguilarSe_LE3_11.c
 AUTHOR      : Sean Karl Tyrese G. Aguilar
 DESCRIPTION : A program that ask for user;s yearly pay and displays his
               weekly pay.
 COPYRIGHT   : 07 Sep 2022
 REVISION HISTORY
 Date:               By:             Description:
 10 Sep 2022        SKTA            Modify documentation
 11 Sep 2022        SKTA            Added comments for documentation
============================================================================*/
#include <stdio.h>

/*============================================================================
 FUNCTION    : main
 DESCRIPTION : Execute the main program.
 ARGUMENTS   : float yearlyPay - for storing yearlyPay value
               float weeklyPay - for storing weeklyPay value
 RETURNS     : int - exit codes
===========================================================================*/
int main()
{
    float yearlyPay;

    // Asks value and storing it to a variable
    printf("Input yearly pay: ");
    scanf("%f", &yearlyPay);

    // Memory constant
    const float weeklyPay = yearlyPay / 52;

    // Print the value in 2 decimal places, rounding off to its hundredth place
    printf("Your weekly pay is: %.2f", weeklyPay);
    return 0;
}