#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
 
    float a,b,x,delta_x;
    FILE *fp;
   

    printf("funkcija f(x) = exp(x)\n\n");
    printf("Saakuma intervals (a)?\n");
    scanf("%f",&a);

    printf("Beigu intervaals (b)?\n");
    scanf("%f",&b);

    printf("delta_x veertiba?\n");
    scanf("%f",&delta_x);

    printf("        x  |       exp(x)   |   exp\'(x)       |  exp\'(x)       |  exp\'\'(x)      | exp\'\'(x)  \n"
           "           |                |analytical formula|finite difference|analytical formula|finite difference\n"
           "           |                |                  |                 |                  |                       \n"
           "    ========================================================================================================\n");
    x=a;

    fp = fopen("derivative.dat", "w");

    while(x<b){
        fprintf(fp,"%10.3f\t%10.3f\t%10.3f\t%10.3f\t%10.3f\t%10.3f\n",x,exp(x*x),-0.5*exp(x*x),(exp((x+delta_x)*x)-exp(x*x))/delta_x,-0.25*exp(x),(-0.5*exp((x+delta_x)/2)-(-0.5*exp(x)))/delta_x);
        printf("%10.3f\t%10.3f\t %10.3f\t    %10.3f\t       %10.3f\t    %10.3f\n",x,exp(x),-0.5*exp(x),(exp((x+delta_x)/2)-exp(x))/delta_x,-0.25*exp(x),(-0.5*exp((x+delta_x)/x)-(-0.5*exp(x)))/delta_x);
        x +=delta_x;
      
    }
    fclose(fp);

    return 0;
}
