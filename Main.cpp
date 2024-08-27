/**
 ---------------------------------------------------------
 @param a is a First_Coefficient  of the equation
 @param b is a Second_Coefficient of the equation
 @param c is a Third_Coefficient  of the equation

 @param x1 is a First_Root  of the equation
 @param x2 is a Second_Root of the equation

 @return Number_Is_Received - checking if received string is a number

 @return Inputs_Of_Numbers_With_One_Rewriting - makes a massive of received numbers
 @return Solve_Linear_Equation - solves equation if First_Coefficient is 0
 @return Solve_Quadric_Equation - solves equation if First_Coefficient is not 0
 @return Solve_If_Discr_Is_Positive - solves equation with 2 roots
 @return Solve_If_Discr_Is_Zero - solves equation with 1 root
 @return All_Tests - contains all coefficients of tests
 @return Test_With_Structures - runs tests with premade Structures
 @return Test - runs tests without premade Structures
 ---------------------------------------------------------
*/

#include <assert.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>

#include "Inputs.h"
#include "Solvings.h"
#include "Tests.h"
#include "Exit_Codes.h"

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------



/*
g++ .\Main.cpp .\Tests.cpp .\Exit_Codes.cpp .\Inputs.cpp .\Solvings.cpp
*/



int main()
{
    int Current_Code_Of_Program = PROGRAM_STILL_IN_PROGRESS;
    int Amount_Of_Roots_Of_Quadratic_Equation = QUADRATIC_EQUATION_ERROR;

    Amount_Of_Roots_Of_Quadratic_Equation =
                Solving_Quadratic_Or_Linear_Equation(&Current_Code_Of_Program);
}


