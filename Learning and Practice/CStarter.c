#include <stdio.h>
#include <stdbool.h>

int main(){
// simple data types:
    int age = 15;               // 4 bytes, stores an integer (-2,147,483,648 - +2,147,483,647)
    float marks = 99.99;        // stores a floating point
    char letter = 'm';       // stores a single character
    char name[] = "my name";   // stores a string
// more complex data types:
    double y = 3.142593746384374973; // 8 bytes and 64 bit precision (larger and more accurate than floating points)
    bool T = true;                   // 1 byte, stores true or false (must write #include <stdbool.h> at beggining)

    char n = 112;                    // chars are able to store integers from (-128) to (+127) 
    short s = 24456;                 // 2 bytes, a short integer, stores numbers between (-32,768 - +32,767)
    long long int lli = -8395376028406837285; // 8 bytes, stores ints from (-9 quintillion - +9 quintillion)
//unsigned data types:
    unsigned char u = 130;           // unsigned data types ignore negative numbers
    unsigned short si = 62847;       // char range: 0 - +255, short range = 0 - +65,535,
    unsigned int ui = 4171485846;    // int range: (0 - +4,294,967,295)
    unsigned long long int ulli = 14395376028406837285U; // unsigned ll int range: (0 - +18 quintillion) (A "U" must be added to prevent a warning)
                                     /* NOTE: going above these types' ranges will cause overflow
                                        (256 = 0, etc.) */

    printf("my name is %s\n",name);        // %s for string
    printf("my age is %d\n",age);          // %d for integer
    printf("marks: %.2f\n",marks);      // %f for floating point
    printf("%c\n",letter);               // %c for single character
    printf("this is pretty nifty %.12lf\n",y); //%lf for double (long float)
    printf("%c\n",n);
    printf("%d\n",n);                       /* when char is storing an int, %c for corresponding
                                            letter in ASCII conversion table, and %d for number stored */
    printf("%u\n",ui);                      // NOTE: unsigned ints use %u instead of %d
    printf("%lld\n",lli);                   // %lld for long long ints
    printf("%llu\n",ulli);                  // %llu for unsigned ll ints

    printf("this was a headache\n");
    printf("msys64 sucks\n");

// constants:
    const float pi = 3.14;  // a constant is a value within a variable that
    const short a = -21;    // cannot be changed during execution

    return 0;
}