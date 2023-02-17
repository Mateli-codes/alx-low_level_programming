#include <stdio.h>

/**
 * main - program that prints the size of various data types
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
printf("size of char: %d byte(s)", sizeof(char));
printf("size of int: %d byte(s)", sizeof(int));
printf("size of long int: %d byte(s)", sizeof(long int));
printf("size of long long int: %d byte(s)", sizeof(long long int));
printf("size of float: %d byte(s)", sizeof(float));
return (0);
}