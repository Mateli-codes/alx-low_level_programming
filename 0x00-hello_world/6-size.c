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
printf("size of char: %zu byte(s)\n", sizeof(a));
printf("size of int: %zu byte(s)\n", sizeof(b));
printf("size of long int: %zu byte(s)\n", sizeof(c));
printf("size of long long int: %zu byte(s)\n", sizeof(d));
printf("size of float: %zu byte(s)\n", sizeof(f));
return (0);
}
