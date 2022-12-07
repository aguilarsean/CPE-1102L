/*======================================================================
FILENAME    : aguilarSe_LE6_12.c
DESCRIPTION : Program that determine whether the letter entered by the user is vowel or consonant.
AUTHOR      : Sean Karl Tyrese G. Aguilar
CREATED     : 09 November 2022
========================================================================*/
//Header Files
#include <stdio.h>
#include <stdbool.h>

//Function Prototypes
bool isLetter(char ch);
bool isVowel(char ch);

/*======================================================================
FUNCTION    : main
DESCRIPTION : Execute the main program
ARGUMENTS   : void
RETURN      : int - exit codes
========================================================================*/
int main(void) {
    char ch;

    printf("Enter a letter: ");
    scanf(" %c", &ch);

    if(!isLetter(ch))
        printf("INVALID INPUT!");
    else 
    {
        if(!isVowel(ch))
            printf("CONSONANT!");
        else
            printf("VOWEL!");
    }
    return 0;
}

/*======================================================================
FUNCTION    : isLetter
DESCRIPTION : Determines if the character inputted is a letter or not
ARGUMENTS   : char ch - inputted character
RETURN      : bool letter - 1 for true, 0 for false
========================================================================*/
bool isLetter(char ch) {
    bool letter;
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        letter = 1;
    else
        letter = 0;
    return letter;
}

/*======================================================================
FUNCTION    : isLetter
DESCRIPTION : Determines if the character is a vowel or consonant
ARGUMENTS   : char ch - inputted character
RETURN      : bool vowel - 1 for true, 0 for false
========================================================================*/
bool isVowel(char ch) {
    bool vowel;
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        vowel = 1;
    else
        vowel = 0;
    return vowel;
}