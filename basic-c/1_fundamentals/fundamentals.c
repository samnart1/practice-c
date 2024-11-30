#include <stdio.h>

int main(void) {

    int num = 99;
    int mun = 100;
    char ch = 'x';
    float f = 100.1234;
    double d = 123.0009;

    printf("This is a ");
    printf("beginning to greatness");
    printf(" we are witnessing here.\n");

    printf("This prints a digit: %d!", num);
    printf("\nThe value of the second digit is: %d", mun);

    printf("\nThis is a %c", ch);
    printf("\nThis is a floating point digit: %f", f);
    printf("\nThis is a double precision floating point digit: %f", d);

    return 0;
}