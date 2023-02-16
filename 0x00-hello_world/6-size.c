#include <stdio.h>

/**
 * main - program that prints the size of various data types
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int integerType;
float floatType;
char charType;
double doubleType;
printf("size of int: %ld bytes\n", sizeof(integerType));
printf("size of float: %ld bytes\n", sizeof(floatType));
printf("size of char: %ld bytes\n", sizeof(charType));
printf("size of double: %ld bytes\n", sizeof(doubleType));
return (0);
}
