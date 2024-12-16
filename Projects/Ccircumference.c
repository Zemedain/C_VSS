#include <stdio.h>

int main(){

    const double PI = 3.14159;
    float radius;
    double circumference;

    printf("\nEnter the radius of the circle: ");
    scanf("%f",&radius);

    circumference = 2 * PI * radius;

    printf("\nThe circumference of the circle is %lf",circumference);

    return 0;

}