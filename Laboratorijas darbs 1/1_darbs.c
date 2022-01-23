#include <stdio.h>
#include <math.h>

const char *TAILOR_EXP = "\
                %d                       \n\
               _____                     \n\
              \\           k        \n\
               \\      (x)        \n\
e( exp %.ef) = >     ____________________ \n\
               /                    \n\
              /____  (k)!        \n\
               k=%d                      \n\
";

const char *RECURRENCE_EXP = "\
                                 k           \n\
                               (x)     \n\
Rekurences reizinajums:    ___________________\n\
                                              \n\
                                (k)!     \n\
";

float factorial(int val)
{
    float res = 1.0f;
    for (int i = 2; i <= val; i++)
        res *= i;
    return res;
}

float taylor_exp(float x, int k)
{
    return (pow(x, k));
}

int main()
{
    float x;

    printf("y(x) = exp(x) funkcija: \n Ievadiet X vertibu: ");
    scanf("%f", &x);

    printf("e(%.2f) = %.2f\2", x, pow(2.718281828, x));

    float s = taylor_exp(x, 0);

    printf(" a0  = %.2f    S0  = %.2f\n", s, s);

    for (int i = 1; i < 1000; i++)
        s += taylor_exp(x, i);

    

    printf("a999  = %.2f   S999  = %.2f\n", taylor_exp(x, 999), s);
    s += taylor_exp(x, 1000);
    printf("a1000 = %.2f   S1000 = %.2f\n", taylor_exp(x, 1000), s);

    

    printf(TAILOR_EXP, 0, x, 1000);
    printf("\n\n");
    printf(RECURRENCE_EXP);
    return 0;
}
