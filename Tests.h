#ifndef ONLINE_TESTS
#define ONLINE_TESTS

#include "All_Definitions.cpp"
#include "Inputs.h"
#include "Solvings.h"
#include "Exit_Codes.h"



#include <assert.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>



void All_Tests()
{
    const int AMOUNT_OF_TESTS = 2;
                                       //  a, b, c, x1, x2, Amount_Of_Roots_Of_Quadric_Equation
    struct Types_Of_Coefficients Taken_Data [AMOUNT_OF_TESTS] = {{1, 2, 1, -1, 0, 1},
                                                                 {2, 4, 2, -1, 0, 1}};
    for (int i = 0; i < AMOUNT_OF_TESTS; i++)
    {
        double x1_Test = 0, x2_Test = 0;
        Test_With_Structures(Taken_Data, &x1_Test, &x2_Test);
    }
}



void Test_With_Structures(Types_Of_Coefficients *data, double *x1_Test, double *x2_Test)
{
    assert (*x1_Test != NAN);
    assert (*x2_Test != NAN);
    assert (isfinite (*x1_Test) == 1);
    assert (isfinite (*x2_Test) == 1);
    Solve_Quadric_Equation((*data).a, (*data).b, (*data).c, x1_Test, x2_Test);
}



void Test(double a, double b, double c,
                        double x1_Expected, double x2_Expected, int Amount_Of_Roots_Expected)
{
    assert (a != NAN);
    assert (b != NAN);
    assert (c != NAN);
    assert (isfinite (a) == 1);
    assert (isfinite (b) == 1);
    assert (isfinite (c) == 1);

    assert (x1_Expected != NAN);
    assert (x2_Expected != NAN);
    assert (Amount_Of_Roots_Expected != NAN);
    assert (isfinite (x1_Expected) == 1);
    assert (isfinite (x2_Expected) == 1);
    assert (isfinite (Amount_Of_Roots_Expected) == 1);

    static int Test_Number = 1;
    double x1 = 0;
    double x2 = 0;

    int Amount_Of_Roots_Of_Quadric_Equation = Solve_Quadric_Equation(a, b, c, &x1, &x2);

    if ( (Amount_Of_Roots_Of_Quadric_Equation != Amount_Of_Roots_Expected)
        || (x1 > x1_Expected + SMALL_DIFF)
        || (x1 < x1_Expected - SMALL_DIFF)
        || (x2 > x2_Expected + SMALL_DIFF)
        || (x2 < x2_Expected - SMALL_DIFF) )
    {
        printf("Test %d Failed: a = %lg, b = %lg, c = %lg, x1 = %lg, x2 = %lg, "
                "Amount_Of_Roots_Of_Quadric_Equation = %d\n",Test_Number, a, b, c, x1, x2,
                 Amount_Of_Roots_Of_Quadric_Equation);

        printf("Expected: x1 = %lg, x2 = %lg, Amount_Of_Roots_Of_Quadric_Equation = %d\n",
                          x1_Expected, x2_Expected, Amount_Of_Roots_Expected);
    }
    else
    {
        printf("Test %d Succeeded", Test_Number);
    }

    Test_Number += 1;
}



#endif