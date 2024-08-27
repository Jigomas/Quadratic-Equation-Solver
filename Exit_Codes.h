#ifndef ONLINE_RETURN_CODESH
#define ONLINE_RETURN_CODESH



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


int Return_Codes_Of_Program(double x1, double x2, int Amount_Of_Roots_Of_Quadric_Equation);



#endif // ONLINE_RETURN_CODESH
