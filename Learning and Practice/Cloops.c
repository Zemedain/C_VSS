#include <stdio.h>
#include <string.h>

int main(){

    for(short i = 2; i <= 10; i+=2){
        printf("%d\n",i);
    }


    char name[25];

    printf("\nPlease enter your name: ");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    while(strlen(name) == 0){
        printf("\nPlease enter your name: ");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';
    }

    printf("Good day, %s",name);


    unsigned int num = 0;
    unsigned int sum = 0;
    do{
        printf("\nEnter a number (enter 0 to exit):");
        scanf("%u",&num);
        if (num > 0)
        {
            sum += num;
        }

    }while(num != 0);

    printf("\nThe sum is %u",sum);

return 0;

}