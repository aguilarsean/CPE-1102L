/*============================================================================
 FILE        : aguilarSe_LE5_11.c
 AUTHOR      : Sean Karl Tyrese G. Aguilar
 DESCRIPTION : Program that will ask 10 integers and display the average of
               all even numbers and the product of all odd numbers entered.
 COPYRIGHT   : 28 September 2022
 REVISION HISTORY
 Date:               By:             Description:
============================================================================*/
#include <stdio.h>

/*============================================================================
 FUNCTION    : main
 DESCRIPTION : Execute the main program
 ARGUMENTS   : nums - for storing the 10 digits
               avg - for the average of even numbers
               prod - for the product of odd numbers
               count - range/numbers of even numbers.
 RETURNS     : int - exit codes
===========================================================================*/
int main()
{
    int nums, avg = 0, prod = 1, count = 0;

    printf("Enter 10 integers: ");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &nums); // Asks the 10 digits

        if (nums % 2 == 0) // For determining the even numbers
        {
            count++;
            avg += nums;
        }
        else // For odd numbers
        {
            prod *= nums;
        }
    }

    printf("The average of all even numbers is: %d\n", avg / count);
    printf("The product of all odd numbers is : %d\n", prod);
    return 0;
}