#include <stdio.h>
#include <ctype.h>

int main(){

    char unit;
    float temp;
    float newtemp;

    printf("\nWhich unit would you like to convert? (C/F): ");
    scanf("%c",&unit);
    unit = toupper(unit);
    printf("\nEnter the tmperature you would like to convert: ");
    scanf("%f",&temp);

    if(unit == 'C'){
        newtemp = (temp * 9 / 5) + 32;
        printf("\nYour temperature in Fahrenheit is %.1fF",newtemp);
    }
    else if(unit == 'F'){
        newtemp = ((temp - 32) * 5) / 9;
        printf("\nYour temperature in Celsius is %.1fC",newtemp);
    }
    else{
        printf("Your input is invalid. Please try again");
    }

    return 0;
    
}