/*============================================================================
 FILE        : aguilarSe_LE4_11.c
 AUTHOR      : Sean Karl Tyrese G. Aguilar
 DESCRIPTION : Determines whether the letter entered by the user is vowel
               or consonant.
 COPYRIGHT   : 20 September 2022
 REVISION HISTORY
 Date:               By:             Description:
============================================================================*/
#include <stdio.h>

/*============================================================================
 FUNCTION    : main
 DESCRIPTION : Execute the main program
 ARGUMENTS   : char letter - for storing the entered letter
 RETURNS     : int - exit codes
===========================================================================*/
int main()
{
    char letter;

    // Asks for an input
    printf("Enter a letter: ");
    scanf("%c", &letter);

    if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z')) // Determines if the character is either a uppercased alphabet or lowercased alphabet
    {
        if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U') // Determines if the character is a lowercased vowel
        {
            printf("VOWEL!");
        }
        else // Displays the word CONSONANT if the first two condition is not true
        {
            printf("CONSONANT!");
        }
    }
    else // Display the statement INVALID INPUT if the entered letter is not a alphabet
    {
        printf("INVALID INPUT!");
    }
    return 0;
}