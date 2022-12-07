/*======================================================================
FILENAME    : aguilarSe_LE7_11.c
DESCRIPTION : Program that asks a string and determines how many vowels and consonants.
AUTHOR      : Sean Karl Tyrese G. Aguilar
CREATED     : 16 November 2022
========================================================================*/
// Header
#include <stdio.h>
#include <string.h>

// Function Prototype
void numVnC(char *word);

/*======================================================================
FUNCTION    : main
DESCRIPTION : Execute the main program
ARGUMENTS   : void
RETURN      : int - exit codes
========================================================================*/
int main(void) {
    char word[100];

    printf("Enter string: ");
    gets(word);

    numVnC(word);
    return 0;
}

/*======================================================================
FUNCTION    : numVnc
DESCRIPTION : Determines which element in the array is the largest integer
ARGUMENTS   : char *word - inputted string
              int vowel - number of vowel/s in *word
              int consonant - number of consonant/s in *word
RETURN      : void
========================================================================*/
void numVnC(char *word) {
    int vowel = 0, consonant = 0;

    for (int i = 0; word[i]; i++)
    {
        if((word[i] >= 'a' && word[i] <= 'z') || (word[i] >= 'A' && word[i] <= 'Z')) 
            if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U')
                vowel++;
            else
                consonant++;
    }

    printf("\nNumber of vowel/s     = %d", vowel);
    printf("\nNumber of consonant/s = %d", consonant);
    return;
}