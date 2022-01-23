
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float Midpoint_integral(float, float, int);
float Trapezoid_integral(float, float, int);
float Simpsons_integral(float, float, int);

void main(){


    float a,b,x, delta_x, Integ_mid;
    int n;

    printf("funkcija f(x) = exp(x)\n\n");
    printf("funkcijas sakums \n");
    scanf("%f",&a);

    printf("funkcijas beigas\n");
    scanf("%f",&b);

    printf("punktu skaits\n");
    scanf("%d",&n);


    Midpoint_integral(a, b, n);

    Trapezoid_integral(a, b, n);

    Simpsons_integral(a, b, n);

}

float Midpoint_integral(float a, float b, int n){
    float Integral_mid, delta_x, midpoint;
    int k;

    Integral_mid = 0;
    delta_x = (b-a)/n;

    b = a + delta_x;

    for(k=1;k<=n;k++){
        midpoint = (b + a)/2;
        Integral_mid += exp(midpoint/2);
        b += delta_x;
        a += delta_x;
    }

    Integral_mid = Integral_mid*delta_x;

    printf("\tViduspunkts = %.12f\n", Integral_mid);
    return Integral_mid;
}

float Trapezoid_integral(float a, float b, int n){
    float Integral_trapez, delta_x, x;
    int k;

    Integral_trapez = 0;
    delta_x = (b-a)/n;

    for(k=1;k<=n;k++){
        if(k==1){
            Integral_trapez += exp(x);
            a += delta_x;
        }
        else{
            Integral_trapez += (exp(x))*2;
            a += delta_x;
        }
    }
    Integral_trapez += exp(x);
    Integral_trapez = (delta_x/2)*Integral_trapez;

    printf("\tTrapece = %.12f\n", Integral_trapez);
    return Integral_trapez;
}

float Simpsons_integral(float a, float b, int n){
    float Integral_simp, delta_x, x;
    int k;

    Integral_simp = 0;
    delta_x = (b-a)/n;

    for(k=1;k<=(n-1);k++){
        if(k==1){
            Integral_simp += exp(x);
            a += delta_x;
        }
        else if(k==2){
            Integral_simp += 4*exp(x);
            a += delta_x;
        }
        else{
            if(k%2 == 0){
            Integral_simp += (exp(x))*4;
            a += delta_x;
            }
            else{
                Integral_simp += (exp(x))*2;
            a += delta_x;
            }
        }
    }
    Integral_simp += 4*exp(x);
    Integral_simp += exp(x);
    Integral_simp = (delta_x/3)*Integral_simp;

    printf("\tSimpsona metode = %.12f\n", Integral_simp);
    return Integral_simp;
}
