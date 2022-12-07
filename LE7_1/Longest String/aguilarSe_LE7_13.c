/*======================================================================
FILENAME    : aguilarSe_LE7_11.c
DESCRIPTION : Program that asks for 5 string and displays the longest string.
CREATED     : 16 November 2022
========================================================================*/
// Header
#include <stdio.h>
#include <string.h>

// Function Prototype
void longestString(char word[][20], int n);

/*======================================================================
FUNCTION    : main
DESCRIPTION : Execute the main program
ARGUMENTS   : void
RETURN      : int - exit codes
========================================================================*/
int main(void) {
    char word[100][20];
    const int n = 5;

    printf("Enter 5 words: \n \n");

    for (int i = 0; i < n; i++)
    {
        scanf("%s", &word[i]);
    }
    
    longestString(word, n);
    return 0;
}

/*======================================================================
FUNCTION    : longestString
DESCRIPTION : Determines the longest string
ARGUMENTS   : char word - inputted strings in 2d array
              int n - number of words inputted
              int len - for determining the length of the string
              int longest - longest string in the array
RETURN      : void
========================================================================*/
void longestString(char word[][20], int n) {
    int len, longest, j;

    longest = strlen(word[0]);

    for (int i = 1; i < n; i++)
    {
        len = strlen(word[i]);
        
        if (len > longest)
            j = i;
            longest = len;
    }
    
    printf("\nThe longest word is \"%s\"\n\n", word[j]);
    return;
}