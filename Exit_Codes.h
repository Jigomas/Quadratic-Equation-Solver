#ifndef ONLINE_RETURN_CODES
#define ONLINE_RETURN_CODES

#include "All_Definitions.cpp"

#include <assert.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>



int Return_Codes_Of_Program(double x1, double x2, int Amount_Of_Roots_Of_Quadric_Equation)
{
    assert (x1 != NAN);
    assert (x2 != NAN);
    assert (Amount_Of_Roots_Of_Quadric_Equation != NAN);
    assert (isfinite (x1) == 1);
    assert (isfinite (x2) == 1);
    assert (isfinite (Amount_Of_Roots_Of_Quadric_Equation) == 1);

    switch (Amount_Of_Roots_Of_Quadric_Equation)
    {
        //  ENDLESS_ROOTS = 3, TWO_ROOTS = 2, ONE_ROOT = 1, NO_ROOTS = 0, ERROR = -1
        case QUADRATIC_EQUATION_ENDLESS_ROOTS:
            printf("Endless amount of roots\n\n");

            return ALL_FINISHED_SUCCESFULLY;
            break;
        case QUADRATIC_EQUATION_TWO_ROOTS:
            printf("Root_1 = %lg, Root_2 = %lg, Amount_Of_Roots_Of_Quadric_Equation = %d\n\n",
             x1, x2, Amount_Of_Roots_Of_Quadric_Equation);

            return ALL_FINISHED_SUCCESFULLY;
            break;
        case QUADRATIC_EQUATION_ONE_ROOT:
            printf("The_Only_Root = %lg, Amount_Of_Roots_Of_Quadric_Equation = %d\n\n", x1,
             Amount_Of_Roots_Of_Quadric_Equation);

            return ALL_FINISHED_SUCCESFULLY;
            break;
        case QUADRATIC_EQUATION_NO_ROOTS:
            printf("Quadratic equation have no roots\n\n");

            return ALL_FINISHED_SUCCESFULLY;
            break;
        default:
            printf("ERROR: No_Exit_Code_Received\n\n");

            return SOMETHING_WENT_WRONG;
            break;
    }

}


#endif