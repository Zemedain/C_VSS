#include <stdio.h>
#include <math.h>

int main(){

    double A;
    double B;
    double C;

    printf("\nEnter side A of the triangle: ");
    scanf("%lf",&A);
    printf("\nEnter side B of the triangle: ");
    scanf("%lf",&B);

    C = sqrt(pow(A, 2) + pow(B, 2));
    printf("\nSide C of the triangle is %lf",C);

return 0;

}