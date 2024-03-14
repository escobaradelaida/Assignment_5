/*Write a C program to print out the minimal and maximum values of different data types
  (e.g,. int, long, float, double) and demonstrate the overflow issues.*/

#include <stdio.h>
#include <limits.h>
#include <float.h> // library that helps with providing numerical limits

int main() {
    printf("Minimum and maximum values of various data types:\n");

    // this is for char data type.Includes unsigned data
    printf("char: %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("unsigned char: 0 to %u\n", UCHAR_MAX);


    // this is for short data type
    printf("short: %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned short: 0 to %u\n", USHRT_MAX);

    // this is for int data type
    printf("int: %d to %d\n", INT_MIN, INT_MAX);
    printf("unsigned int: 0 to %u\n", UINT_MAX);

    // this is for long data type
    printf("long: %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("unsigned long: 0 to %lu\n", ULONG_MAX);

    // this is for float and double data type
    printf("float: %e to %e\n", FLT_MIN, FLT_MAX);
    printf("double: %e to %e\n", DBL_MIN, DBL_MAX);

    // Overflow demonstration
    printf("\nOverflow demonstration:\n");

    int max_int = INT_MAX;
    printf("Max int before overflow: %d\n", max_int);
    // add one to the max int data type for overflowing
    max_int = max_int + 1;  // Overflow occurs here. mex_int will be reassigned
    printf("Max int after overflow: %d\n", max_int);

    return 0;
}
