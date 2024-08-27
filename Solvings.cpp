#include <assert.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>

#include "Inputs.h"
#include "Exit_Codes.h"
#include "Solvings.h"



int Is_Close_To_Zero(double Number)
{
    assert (Number != NAN);
    assert (isfinite (Number) == 1);

    if (fabs(Number) <= SMALL_DIFF)
        return 1;

    return 0;
}



int Solving_Quadratic_Or_Linear_Equation(int *Current_Code_Of_Program)
{
    assert (*Current_Code_Of_Program != NAN);
    assert (isfinite (*Current_Code_Of_Program) == 1);

    int Amount_Of_Roots_Of_Quadratic_Equation = QUADRATIC_EQUATION_ERROR;

    while (*Current_Code_Of_Program == PROGRAM_STILL_IN_PROGRESS)
    {
        struct Quadratic_Equation Equation = {0, 0, 0, 0, 0};

        Inputs_Of_Numbers_With_One_Rewriting(&(Equation.a), &(Equation.b), &(Equation.c));

        if ( !Is_Close_To_Zero(Equation.a) )
            Amount_Of_Roots_Of_Quadratic_Equation =
                            Solve_Quadratic_Equation(Equation.a, Equation.b, Equation.c,
                                                 &(Equation.x1), &(Equation.x2));
        else
            Amount_Of_Roots_Of_Quadratic_Equation = Solve_Linear_Equation(Equation.b,
                                                                        Equation.c, &(Equation.x1));

        *Current_Code_Of_Program = Return_Codes_Of_Program(Equation.x1, Equation.x2,
                                                           Amount_Of_Roots_Of_Quadratic_Equation);
    }

    return Amount_Of_Roots_Of_Quadratic_Equation;
}



int Solve_Linear_Equation(double b, double c, double *x1)
{
    assert (b != NAN);
    assert (c != NAN);
    assert (*x1 != NAN);
    assert (isfinite (b) == 1);
    assert (isfinite (c) == 1);
    assert (isfinite (*x1) == 1);

    if (Is_Close_To_Zero(b) != 0)
    {
        *x1 = -c / b;

        return QUADRATIC_EQUATION_ONE_ROOT;
    }
    else
    {
        return QUADRATIC_EQUATION_NO_ROOTS;
    }
}



int Solve_Quadratic_Equation(double a, double b,
                           double c, double *x1, double *x2)
{
    assert (a != NAN);
    assert (b != NAN);
    assert (c != NAN);
    assert (isfinite (a) == 1);
    assert (isfinite (b) == 1);
    assert (isfinite (c) == 1);

    assert (*x1 != NAN);
    assert (*x2 != NAN);
    assert (isfinite (*x1) == 1);
    assert (isfinite (*x2) == 1);

    double Discr = b * b - 4 * a * c;

    printf("Discriminant: %lg \n", Discr);

    if (Discr > SMALL_DIFF)
    {
        if (Solve_If_Discr_Is_Positive(Discr, a, b, c, x1, x2))
            return QUADRATIC_EQUATION_TWO_ROOTS;
    }

    else if (Discr < -SMALL_DIFF)
    {
        return QUADRATIC_EQUATION_ENDLESS_ROOTS;
    }

    else if (Is_Close_To_Zero(Discr))
    {
        if (Solve_If_Discr_Is_Zero(a, b, x1))
            return QUADRATIC_EQUATION_ONE_ROOT;
    }
    else
    {
        return QUADRATIC_EQUATION_ERROR;
    }
}


int Solve_If_Discr_Is_Positive(double Discr, double a, double b, double c, double *x1, double *x2)
{
    assert (a != NAN);
    assert (b != NAN);
    assert (c != NAN);
    assert (isfinite (a) == 1);
    assert (isfinite (b) == 1);
    assert (isfinite (c) == 1);

    assert (*x1 != NAN);
    assert (*x2 != NAN);
    assert (isfinite (*x1) == 1);
    assert (isfinite (*x2) == 1);

    double Quadratic_Root_From_Discr = sqrt(Discr);

    *x1 = (-b + Quadratic_Root_From_Discr) / (2 * a);
    *x2 = (-b - Quadratic_Root_From_Discr) / (2 * a);

    return 1;
}



int Solve_If_Discr_Is_Zero(double a, double b, double *x1)
{
    assert (a != NAN);
    assert (b != NAN);
    assert (isfinite (a) == 1);
    assert (isfinite (b) == 1);

    assert (*x1 != NAN);
    assert (isfinite (*x1) == 1);

    *x1 =  (-b) / (2 * a);

    return 1;
}

