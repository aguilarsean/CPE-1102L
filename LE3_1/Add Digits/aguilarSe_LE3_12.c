/*============================================================================
 FILE        : aguilarSe_LE3_12.c
 AUTHOR      : Sean Karl Tyrese G. Aguilar
 DESCRIPTION : A program that extracts and adds the two least significant
               digits of an integer.
 COPYRIGHT   : 07 September 2022
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
               int num - for storing the digits you enter
               int num1 - for storing the 1st least significant digit
               int num2 - for storing the 2nd least siginicant digit
               int sum - for storing the sum of num1 and num2
 RETURNS     : int - exit codes
===========================================================================*/
int main()
{
    int num, num1, num2;

    // Asks value and storing it to a variable
    printf("Enter a number : ");
    scanf("%d", &num);

    // Calculates and store the modulo to the variable num1
    num1 = num % 10;

    // Calculates and store the modulo to the variable num2
    num2 = (num / 10) % 10;

    // Memory constant
    const int sum = num1 + num2;

    // Prints the two extracted digits and its sum
    printf("Sum            : %d + %d = %d", num2, num1, sum);
    return 0;
}