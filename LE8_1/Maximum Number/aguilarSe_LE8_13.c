/*======================================================================
FILENAME    : aguilarSe_LE8_13.c
DESCRIPTION : Program that determine and returns the maximum number in an array of integers.
CREATED     : 24 November 2022
========================================================================*/
// Header
#include <stdio.h>
#include <stdlib.h>

// Function Prototype
int maxNumber(int *arr, int size);

/*======================================================================
FUNCTION    : main
DESCRIPTION : Execute the main program
ARGUMENTS   : int entries - size of array
              int num - array for the numbers
              int max - call function for maxNumber
RETURN      : void
========================================================================*/
void main() {
    int num[1000], entries, max;

    printf("Enter number of entries: ");
    scanf("%d", &entries);

    for (int i = 0; i < entries; i++)
    {
        printf("Enter number: ");
        scanf("%d", &num[i]);
    }

    max = maxNumber(num, entries);

    printf("\nMaximum Number: %d", max);
}

/*======================================================================
FUNCTION    : maxNumber
DESCRIPTION : Determines the largest number in an array
ARGUMENTS   : int *arr - pointer to integer array
              int size - size of array
              int max - largest number
RETURN      : return max - largest number
========================================================================*/
int maxNumber(int *arr, int size) {
    int max;

    max = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }

    return max;
}
