#ifndef ONLINE_INPUTS
#define ONLINE_INPUTS

#include "All_Definitions.cpp"

#include <assert.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>



int Number_Is_Received(double *Input_Numbers, int i)
{
    assert (*Input_Numbers != NAN);
    assert (i != NAN);
    assert (isfinite (*Input_Numbers) == 1);
    assert (isfinite (i) == 1);

    double Number = 0;
    int Result = 0, Current_Symbol = 1;

    Result = scanf(" %lf", &Number);

    Result = Check_String_Empty(Result);

    if (Result == 1)
    {
        *Input_Numbers = Number;

        return 1;
    }

    printf("Wrong number\n");

    Clear_Buf();

    return 0;
}



int Check_String_Empty(int Result)
{
    int Current_Symbol = getchar();
    while (Result == 1 && Current_Symbol != '\n' && Current_Symbol != EOF )
    {
        Current_Symbol = getchar();
        if (isspace(Current_Symbol) == 0)
            Result = 0;
    }

    return Result;
}



void Clear_Buf()
{
    int Current_Symbol = getchar();
    while (Current_Symbol != '\n' && Current_Symbol != EOF)
        Current_Symbol = getchar();

    return;
}



void Inputs_Of_Numbers_With_One_Rewriting(double *a, double *b, double *c)
{
    assert (*a != NAN);
    assert (*b != NAN);
    assert (*c != NAN);
    assert (isfinite (*a) == 1);
    assert (isfinite (*b) == 1);
    assert (isfinite (*c) == 1);

    double Input_Numbers[3] = {0, 0, 0};

    const int Amount_Of_Coefficients = 3;

    printf("\t\tPlease type 3 different numbers which will be a "
           "Coefficients of quadratic equation:\n");

    for (int i = 0; i < Amount_Of_Coefficients; i++)
    {
        printf("Number %d:\n", i + 1);
        int Is_Number_Received = 0;

        while (Is_Number_Received == 0)
            Is_Number_Received = Number_Is_Received(&Input_Numbers[i],  i);

    }

    printf("I`ve got:\n");

    for (int i = 0; i < Amount_Of_Coefficients; i++)//todo const
        printf("Coefficient %d: %lg\n", i + 1, Input_Numbers[i]);

    *a = Input_Numbers[0];
    *b = Input_Numbers[1];
    *c = Input_Numbers[2];
}



void Inputs_Of_Numbers_With_Three_Rewritings(double *a, double *b, double *c)
{
    assert (*a != NAN);
    assert (*b != NAN);
    assert (*c != NAN);
    assert (isfinite (*a) == 1);
    assert (isfinite (*b) == 1);
    assert (isfinite (*c) == 1);


    printf("\t\tPlease type 3 different numbers which will be a "
           "Coefficients of quadratic equation:\n");

    double First_Coef = 0;
    double Second_Coef = 0;
    double Input_Numbers[3] = {0, 0, 0};
    int Result = 0;
    int k = 0;
    while(1)
    {
        First_Coef = 0;
        Second_Coef = 0;
        Input_Numbers[2] = 0;

        int Result = scanf("%lf %lf", &First_Coef, &Second_Coef);

        if (Result && Number_Is_Received(&Input_Numbers[2], 2))
            break;

        else
            if (k>=1)
                printf("PLEASE DO NOT PRINT IT WRONG!\n");
            k += 1;
    }
    printf("I`ve got:\n");
    *a = First_Coef;
    *b = Second_Coef;
    *c = Input_Numbers[2];

    for (int i = 0; i < 3; i++)
        printf("Coefficients: %lg, %lg, %lg\n", *a, *b, *c);
}



#endif