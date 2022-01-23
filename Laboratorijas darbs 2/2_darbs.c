#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846
#define MAX_INTER_COUNT 128

float my_func(float x)
{
    return exp(x);
}

int main()
{
    float l, r;
    float val;
    float tmp;

    printf("Robezas: ");
    scanf("%f %f", &l, &r);

    printf("Vertiba: ");
    scanf("%f", &val);


    float res_x = l;
    float res_val = my_func(l);

  
    printf("\n");

    printf(" Vertiba: %.2f pie reizinajuma %.2f", res_val, res_x);

    return 0;
}
