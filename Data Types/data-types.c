#include<stdio.h>
#include<stdbool.h>
int main(){
   // 1. Basic Data Types
    int integer = 10;
    char character = 'A';
    float floatNumber = 3.14f;
    double doubleNumber = 3.141592653589793;
    _Bool boolValue = 1;        // C99 standard for boolean
    bool anotherBool = true;    // Requires <stdbool.h>
    
    // Printing basic data types
    printf("Basic Data Types:\n");
    printf("Integer: %d\n", integer);
    printf("Character: %c\n", character);
    printf("Float: %.2f\n", floatNumber);
    printf("Double: %.15lf\n", doubleNumber);
    printf("Boolean (_Bool): %d\n", boolValue);
    printf("Boolean (stdbool.h): %d\n\n", anotherBool);

    // 2. Modified Data Types
    short int shortInteger = 32000;
    long int longInteger = 1000000000;
    unsigned int unsignedInteger = 4000000000;
    signed char signedChar = -128;
    unsigned char unsignedChar = 255;
    
    // Printing modified data types
    printf("Modified Data Types:\n");
    printf("Short Integer: %d\n", shortInteger);
    printf("Long Integer: %ld\n", longInteger);
    printf("Unsigned Integer: %u\n", unsignedInteger);
    printf("Signed Char: %d\n", signedChar);
    printf("Unsigned Char: %u\n\n", unsignedChar);

    // 3. Derived Data Types
    int array[5] = {1, 2, 3, 4, 5}; // Array
    int *pointer = &integer;        // Pointer
}