#include <stdio.h>

int main(){

    char operator;
    double num1;
    double num2;
    double result;

    printf("\nEnter the operation you would like to perform (+, -, *, /): ");
    scanf("%c",&operator);

    printf("\nEnter the first number: ");
    scanf("%lf",&num1);

    printf("\nEnter the second number: ");
    scanf("%lf",&num2);

    switch(operator){
        case '+':
            result = num1 + num2;
            printf("\nThe sum is: %.2lf",result);
            break;
        case '-':
            result = num1 - num2;
            printf("\nThe difference is: %.2lf",result);
            break;
        case '*':
            result = num1 * num2;
            printf("\nThe result is: %.2lf",result);
            break;
        case '/':
            result = num1 / num2;
            printf("\nThe result is: %.2lf",result);
            break;
        default:
            printf("This operator is invalid. Please try again");
        
    }


return 0;

}