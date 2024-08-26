/**
//---------------------------------------------------------
//* @param a is a First_Coefficient  of the equation
//* @param b is a Second_Coefficient of the equation
//* @param c is a Third_Coefficient  of the equation
//*
//* @param x1 is a First_Root  of the equation
//* @param x2 is a Second_Root of the equation
//*
//* @return Number_Is_Received - checking if received string is a number
//
//* @return Inputs_Of_Numbers_With_One_Rewriting - makes a massive of received numbers
//* @return Solve_Linear_Equation - solves equation if First_Coefficient is 0
//* @return Solve_Quadric_Equation - solves equation if First_Coefficient is not 0
//* @return Solve_If_Discr_Is_Positive - solves equation with 2 roots
//* @return Solve_If_Discr_Is_Zero - solves equation with 1 root
//* @return All_Tests - contains all coefficients of tests
//* @return Test_With_Structures - runs tests with premade Structures
//* @return Test - runs tests without premade Structures
//---------------------------------------------------------
*/
#include "All_Definitions.cpp"
#include "Inputs.h"
#include "Solvings.h"
#include "Tests.h"
#include "Exit_Codes.h"



#include <assert.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------



/*
g++ .\Code_To_Solve_Quadratic_Equations.cpp .\Tests.h .\Exit_Codes.h .\Inputs.h .\Solvings.h .\All_Definitions.cpp
*/



int main()
{
    struct Must_Needed_Numbers Equation = {0, 0, 0, 0, 0};

    int Current_Code_Of_Program = PROGRAM_STILL_IN_PROGRESS;
    int Amount_Of_Roots_Of_Quadric_Equation = -1;

    Amount_Of_Roots_Of_Quadric_Equation =
                Solving_Quadratic_Or_Linear_Equation(&Current_Code_Of_Program);
}


