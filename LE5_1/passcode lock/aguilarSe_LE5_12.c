/*============================================================================
 FILE        : aguilarSe_LE5_11.c
 AUTHOR      : Sean Karl Tyrese G. Aguilar
 DESCRIPTION : Program that will ask the correct numeric passcode before the
               user can continue his task. The user is given three trails to
               enter the correct passcode.
 COPYRIGHT   : 28 September 2022
 REVISION HISTORY
 Date:               By:             Description:
============================================================================*/
#include <stdio.h>

/*============================================================================
 FUNCTION    : main
 DESCRIPTION : Execute the main program
 ARGUMENTS   : passcode - your passcode for the program
               pin - for storing and checking the inputted passcode
               try - check for number of tries
 RETURNS     : int - exit codes
===========================================================================*/
int main()
{
    int passcode = 123456, pin, try = 1;

    printf("Enter your 6 digit passcode: ");
    scanf("%d", &pin);

    // Checks and loops if pin matches the passcode nad if done in less than 3 tries
    while (passcode != pin && try <= 2)
    {
        printf("Invalid Passcode, Enter your 6 digit passcode: ");
        scanf("%d", &pin);
        try++;
    }

    if (passcode == pin && try <= 3)
        printf("ACCESS GRANTED");
    else
        printf("ACCESS DENIED");

    return 0;
}