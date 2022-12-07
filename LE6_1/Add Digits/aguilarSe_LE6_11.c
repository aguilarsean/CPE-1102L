/*======================================================================
FILENAME    : aguilarSe_LE6_11.c
DESCRIPTION : Program that extracts and adds the two least significant digits of an integer.
AUTHOR      : Sean Karl Tyrese G. Aguilar
CREATED     : 09 November 2022
========================================================================*/
//Header Files
#include <stdio.h>

//Function Prototypes
int extractFirstLSD(int num);
int extractSecondLSD(int num);
int sumDigits(int x, int y);

/*======================================================================
FUNCTION    : main
DESCRIPTION : Execute the main program
ARGUMENTS   : void
RETURN      : int - exit codes
========================================================================*/
int main(void) {
    int num, result;

    printf("Enter a number  : ");
    scanf("%d", &num);

    int x = extractFirstLSD(num);
    int y = extractSecondLSD(num);
    result = sumDigits(x, y);
    printf("Sum\t\t: %d + %d = %d", y, x, result);
    return 0;
}

/*======================================================================
FUNCTION    : extractFirstLSD
DESCRIPTION : Determines the first least significant digit of a number
ARGUMENTS   : int num - inputted number
RETURN      : int x - the first lsd number
========================================================================*/
int extractFirstLSD(int num) {
    int x = num % 10;
    return x;
}

/*======================================================================
FUNCTION    : extractSecondLSD
DESCRIPTION : Determines the second least significant digit of a number
ARGUMENTS   : int num - inputted number
RETURN      : int y - the second lsd number
========================================================================*/
int extractSecondLSD(int num) {
    int y = (num / 10) % 10;
    return y;
}

/*======================================================================
FUNCTION    : extractFirstLSD
DESCRIPTION : Determines the first least significant digit of a number
ARGUMENTS   : int x - first lsd number
              int y - second lsd number
RETURN      : int sum - sum of x and y
========================================================================*/
int sumDigits(int x, int y) {
    int sum;
    sum = x + y;
    return sum;
}