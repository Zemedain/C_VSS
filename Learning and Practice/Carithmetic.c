#include <stdio.h>

int main(){

    // the arithmetic operators available are:
    // + (addition), - (subtraction), * (multiplication), / (division),
    // % (modulus), ++ (increment) and -- (decrement)

    short x = 9, y = 2;

    short z = x + y - x * y;
    float zf = x / (float) y;   // in order to display decimals in division:
    short mod = x % y;          // both the variable containing the new value and the dividend must be floats 
                                // (use ([data type here]) to convert before ur variable)
    printf("%d\n",z);
    printf("%.2f\n",zf);
    printf("%d\n",mod);         // modulus displays the remainder of a division

    return 0;
}