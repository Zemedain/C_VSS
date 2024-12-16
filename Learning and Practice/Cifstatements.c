#include <stdio.h>

int main(){

    unsigned short age;

    printf("\nWelcome to the credit card sign-up page. Enter your age here: ");
    scanf("%u",&age);

    if(age >= 18){
        printf("You have been signed up for your credit card.");
    }
    else if(age <= 0){
        printf("The age you entered is invalid.");
    }
    else{
        printf("You are too young to sign up for a credit card.");
    }

    // && for AND, || for OR, !(condition here) for NOT EQUAL TO

return 0;

}