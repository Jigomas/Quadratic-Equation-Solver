#ifndef ONLINE_ALL_FUNCTIONS
#define ONLINE_ALL_FUNCTIONS

#include <math.h>



const double SMALL_DIFF = 1.0e-6;

enum Different_Amount_Of_Roots_By_Exit_Codes
{
    QUADRATIC_EQUATION_ERROR         = -1,
    QUADRATIC_EQUATION_NO_ROOTS      =  0,
    QUADRATIC_EQUATION_ONE_ROOT      =  1,
    QUADRATIC_EQUATION_TWO_ROOTS     =  2,
    QUADRATIC_EQUATION_ENDLESS_ROOTS =  3,
};

enum All_Possible_Exit_Codes
{
    SOMETHING_WENT_WRONG      = -1,
    PROGRAM_STILL_IN_PROGRESS =  0,
    ALL_FINISHED_SUCCESFULLY  =  1,
};

struct Types_Of_Coefficients
{
    double a, b, c;
    double x1_Expected, x2_Expected;
    int Amount_Of_Roots_Expected;
};

struct Must_Needed_Numbers
{
    double a, b, c;
    double x1, x2;
};



int Solving_Quadratic_Or_Linear_Equation(int *Current_Code_Of_Program);

int Return_Codes_Of_Program(double x1, double x2, int Amount_Of_Roots_Of_Quadric_Equation);

int Number_Is_Received(double *Input_Numbers, int i);

int Check_String_Empty(int Result);

void Clear_Buf();

void Inputs_Of_Numbers_With_One_Rewriting(double *First_Coefficient, double *Second_Coefficient,
                       double *Third_Coefficient);

void Inputs_Of_Numbers_With_Three_Rewritings(double *First_Coefficient, double *Second_Coefficient,
                       double *Third_Coefficient);

int Solve_Linear_Equation(double Second_Coefficient, double Third_Coefficient,
                          double *Root_1);

int Solve_Quadric_Equation(double First_Coefficient, double Second_Coefficient,
                           double Third_Coefficient, double *Root_1,
                           double *Root_2);

int Solve_If_Discr_Is_Positive(double Discr, double First_Coefficient,
                               double Second_Coefficient, double Third_Coefficient,
                               double *Root_1, double *Root_2);

int Solve_If_Discr_Is_Zero(double First_Coefficient, double Second_Coefficient,
                   double *First_Root);

void All_Tests();

void Test_With_Structures(Types_Of_Coefficients *Taken_Data, double *x1_Test, double *x2_Test);

void Test(double First_Coefficient, double Second_Coefficient,
             double Third_Coefficient, double Root_1_Expected,
             double Root_2_Expected, int Amount_Of_Roots_Expected);

int Is_Close_To_Zero(double Number);



#endif