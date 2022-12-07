/*======================================================================
FILENAME    : aguilarSe_LE6_13.c
DESCRIPTION : Program that lets the user choose an operation (power problem
              solver, factorial problem solver, or finding roots for quadratic
              equations using quadratic formula) from the menu.
AUTHOR      : Sean Karl Tyrese G. Aguilar
CREATED     : 09 November 2022
========================================================================*/
//Header Files
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>

//Function Prototypes
void displayMenu();
int powerSolver(int base, int p);
int factorialSolver(int num);
int quadraticSolver(int a, int b, int c);

/*======================================================================
FUNCTION    : main
DESCRIPTION : Execute the main program
ARGUMENTS   : void
RETURN      : int - exit codes
========================================================================*/
int main(void){
    int menuNum, base, p, num, a, b , c, result;

    while(1)
    {
        sleep(2);
        displayMenu();
        scanf("%d", &menuNum);

        switch (menuNum)
        {
        case 1:
            printf("Enter the base number: ");
            scanf("%d", &base);
            printf("Enter the power raised: ");
            scanf("%d", &p);
            powerSolver(base, p);
            break;
        
        case 2:
            printf("Enter a number: ");
            scanf("%d", &num);
            factorialSolver(num);
            break;

        case 3:
            printf("Enter coefficients a, b and c: ");
            scanf("%d %d %d", &a, &b, &c);
            quadraticSolver(a, b, c);
            break;

        case 4:
            exit(0);
        }
    }
    return 0;
}

/*======================================================================
FUNCTION    : displayMenu
DESCRIPTION : Display menu for the program
ARGUMENTS   : 
RETURN      : void
========================================================================*/
void displayMenu() {
    printf("\n\n------ Problem Solver Menu ------\n\n");
    printf("1. Power problem solver\n");
    printf("2. Factorial problem solver\n");
    printf("3. Finding roots for quadratic equations using quadratic formula\n");
    printf("4. Exit\n\n");
    return;
}

/*======================================================================
FUNCTION    : powerSolver
DESCRIPTION : Solves for the power of a number
ARGUMENTS   : int base - base number
              int p - power number
              int result - result of the computed power
RETURN      : int result - result of the computed power
========================================================================*/
int powerSolver(int base, int p) {
    int result = pow(base, p);
    printf("%d^%d = %d", base, p, result);
    return result;
}

/*======================================================================
FUNCTION    : factorialSolver
DESCRIPTION : Solves for the factorial of a number
ARGUMENTS   : int num - inputter number
RETURN      : int factorial - computed factorial answer
========================================================================*/
int factorialSolver(int num) {
    int factorial = 1;

    if (num < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else
    {
        for (int i = 1; i <= num; ++i)
        {
            factorial *= i;
        }
        printf("Factorial of %d = %llu", num, factorial);
        factorial = 1;
    }
    return factorial;
}

/*======================================================================
FUNCTION    : quadracticSolver
DESCRIPTION : Solves a coefficients using a quadratic equation
ARGUMENTS   : int a, b, c - inputted number
              x - discriminants
              x1, x2 - for real roots
RETURN      : int factorial - computed factorial answer
========================================================================*/
int quadraticSolver(int a, int b, int c) {
    double y, x, x1, x2;
    double a1 = (double)a, b1 = (double)b, c1 = (double)c; 

    x = ((b1*b1) - (4*a1*c1));
    y = -(c1 / b1);

    if (a1 == 0) 
    {
        if (b1 == 0) 
            printf("No solution");
        else 
            printf("There is only one root, %.2lf", y);
    }
    else if (x < 0)
    {
        printf("There are no real roots");
    }
    else 
    {
        x1 = (-b1 + sqrt(x)) / (2 * a1);
        x2 = (-b1 - sqrt(x)) / (2 * a1);
        printf("The are two roots, %.2lf %.2lf", x1, x2);
    }
}