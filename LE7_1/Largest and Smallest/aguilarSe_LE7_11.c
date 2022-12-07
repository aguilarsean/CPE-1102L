/*======================================================================
FILENAME    : aguilarSe_LE7_11.c
DESCRIPTION : Program that allows a user to enter 10 numbers, then display
              all of the numbers, the largest, and the smallest.
AUTHOR      : Sean Karl Tyrese G. Aguilar
CREATED     : 16 November 2022
========================================================================*/
// Header
#include <stdio.h>

// Function Prototypes
void numbers(int num[]);
int largest(int num[], int i, int len);
int smallest(int num[], int i, int len);

/*======================================================================
FUNCTION    : main
DESCRIPTION : Execute the main program
ARGUMENTS   : void
RETURN      : int - exit codes
========================================================================*/
int main(void) {
    int num[10], lg, sm;

    printf("Enter 10 numbers: ");
    for (int i = 0; i < 10; i++)
        scanf("%d", &num[i]);

    numbers(num);
    lg = largest(num, 0, 10);
    sm = smallest(num, 0, 10);
    
    printf("\n\nLargest number = %d", lg);
    printf("\nSmallest number = %d", sm);
    return 0;
}

/*======================================================================
FUNCTION    : numbers
DESCRIPTION : Displays all the number inputted
ARGUMENTS   : int num[] - array of inputted numbers
RETURN      : void
========================================================================*/
void numbers(int num[]) {
    printf("\nThe numbers are:\n");
    for (int i = 0; i < 10; i++) 
        printf("%d ", num[i]);
}

/*======================================================================
FUNCTION    : largest
DESCRIPTION : Determines which element in the array is the largest integer
ARGUMENTS   : int num[] - array of inputted numbers
              int i - for accessing the index of the array
              int len - length of the array (connected to the define constant)
RETURN      : int lg - largest number in the array
              int num[i] - largest number in the array 
              int num[i+1] - next largest number in the array if num[i] <= num[i+1]
========================================================================*/
int largest(int num[], int i, int len) {
    int lg;

    if(i >= len-2)
        return (num[i] > num[i+1]) ? num[i] : num[i+1];

    lg = largest(num, i + 1, len);
    return lg;
}

/*======================================================================
FUNCTION    : smallest
DESCRIPTION : Determines which element in the array is the largest integer
ARGUMENTS   : int num[] - array of inputted numbers
              int i - for accessing the index of the array
              int len - length of the array (connected to the define constant)
RETURN      : int sm - smallest number in the array
              int num[i] - smallest number in the array 
              int num[i+1] - next smallest number in the array if num[i] >= num[i+1]
========================================================================*/
int smallest(int num[], int i, int len) {
    int sm;

    if(i < len-2)
        return (num[i] < num[i+1]) ? num[i] : num[i+1];

    sm = smallest(num, i + 1, len);
    return sm;
}