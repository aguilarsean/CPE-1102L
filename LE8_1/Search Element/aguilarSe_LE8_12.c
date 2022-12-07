/*======================================================================
FILENAME    : aguilarSe_LE8_12.c
DESCRIPTION : Program that search an element in an array and returns the index location.
CREATED     : 24 November 2022
========================================================================*/
// Header
#include <stdio.h>

// Function Prototype
int search(int *arr, int entries, int numToSearch);

/*======================================================================
FUNCTION    : main
DESCRIPTION : Execute the main program
ARGUMENTS   : int entries - size of array
              int num - array for the numbers
              int searchData - call function for search
              int data - number/data that the user wants to search 
RETURN      : void
========================================================================*/
void main() {
    int entries, num[100], searchData, data;

    printf("Enter number of entries: ");
    scanf("%d", &entries);

    for (int i = 0; i < entries; i++)
    {
        printf("Enter number: ");
        scanf("%d", &num[i]);
    }

    printf("\nSearch Data: ");
    scanf("%d", &data);

    searchData = search(num, entries, data);

    if (searchData == -1)
        printf("NOT FOUND");
    else
        printf("FOUND in Index %d", searchData + 1);
}

/*======================================================================
FUNCTION    : search
DESCRIPTION : Search an element/data from the array
ARGUMENTS   : int *arr - pointer to integer array
              int entries - size of array
              int numToSearch - data to search
              int *arrEnd - pointer to last array
RETURN      : return (arrEnd - arr) / sizeof(int) + 1 - returns element/data index
              return -1 - if data is not found in the array
========================================================================*/
int search(int *arr, int entries, int numToSearch) {
    int *arrEnd = (arr + entries - 1);
    
    while(arr <= arrEnd && *arr != numToSearch) arr++;

    if(arr <= arrEnd)
        return (arrEnd - arr) / sizeof(int) + 1;

    return -1;
}