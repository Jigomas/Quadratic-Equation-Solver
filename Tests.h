#ifndef ONLINE_TESTSH
#define ONLINE_TESTSH



struct Types_Of_Coefficients
{
    double a, b, c;
    double x1_Expected, x2_Expected;
    int Amount_Of_Roots_Expected;
};



void All_Tests();

void Test_With_Structures(Types_Of_Coefficients *Taken_Data, double *x1_Test, double *x2_Test);

void Test(double First_Coefficient, double Second_Coefficient,
             double Third_Coefficient, double Root_1_Expected,
             double Root_2_Expected, int Amount_Of_Roots_Expected);




#endif // ONLINE_TESTSH
