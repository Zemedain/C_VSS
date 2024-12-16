#include <stdio.h>
#include <string.h>

int main(){

    char name[25];
    int age;

    printf("\nWhat is your name? ");
    //scanf("%s",&name);   reads until spaces
    fgets(name, 25, stdin); // reads whitespaces and includes \n
    name[strlen(name)-1] = '\0';    // #include <string.h> to prevent this

    printf("How old are you? ");
    scanf("%d",&age);

    printf("\nYour name is %s ",name);
    printf("and you are %d years old.",age);

    return 0;

}