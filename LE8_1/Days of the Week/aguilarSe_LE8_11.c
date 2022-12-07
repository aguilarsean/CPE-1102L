/*======================================================================
FILENAME    : aguilarSe_LE8_11.c
DESCRIPTION : Program that returns the day of the week from the given day.
CREATED     : 24 November 2022
========================================================================*/
// Header
#include <stdio.h>
#include <string.h>

// Function Prototype
void weekday(int *day);

/*======================================================================
FUNCTION    : main
DESCRIPTION : Execute the main program
ARGUMENTS   : int day - inputted number
RETURN      : void
========================================================================*/
void main() {
    int day;

    printf("Enter a day: ");
    scanf("%d", &day);

    weekday(&day);
}

/*======================================================================
FUNCTION    : weekday
DESCRIPTION : Determines the day of the week from the given number(day)
ARGUMENTS   : char week - array of days of the week
RETURN      : void
========================================================================*/
void weekday(int *day) {
    char *week[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    if (*day > 7 || *day < 1)
        printf("Day of the week: INVALID");
    else
        printf("Day of the week: %s", week[*day-1]);
}