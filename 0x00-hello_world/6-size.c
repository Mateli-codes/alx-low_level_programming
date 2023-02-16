#include <stdio.h>

/**
 * main - program that prints the size of various data types
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
printf("size of char: %lu bytes\n", (unsigned long)sizeof(a));
printf("size of int: %lu bytes\n", (unsigned long)sizeof(b));
printf("size of long int: %lu bytes\n", (unsigned long)sizeof(c));
printf("size of long long int: %lu bytes\n", (unsigned long)sizeof(d));
printf("size of float: %lu bytes\n", (unsigned long)sizeof(f));
return (0);
}
