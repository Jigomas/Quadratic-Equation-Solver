#ifndef ONLINE_SOLVINGSH
#define ONLINE_SOLVINGSH


const double SMALL_DIFF = 1e-6;

struct Quadratic_Equation
{
    double a, b, c;
    double x1, x2;
};



int Solving_Quadratic_Or_Linear_Equation(int *Current_Code_Of_Program);

int Solve_Linear_Equation(double Second_Coefficient, double Third_Coefficient,
                          double *Root_1);

int Solve_Quadratic_Equation(double First_Coefficient, double Second_Coefficient,
                           double Third_Coefficient, double *Root_1,
                           double *Root_2);

int Solve_If_Discr_Is_Positive(double Discr, double First_Coefficient,
                               double Second_Coefficient, double Third_Coefficient,
                               double *Root_1, double *Root_2);

int Solve_If_Discr_Is_Zero(double First_Coefficient, double Second_Coefficient,
                   double *First_Root);

int Is_Close_To_Zero(double Some_Number);

#endif // ONLINE_SOLVINGSH
