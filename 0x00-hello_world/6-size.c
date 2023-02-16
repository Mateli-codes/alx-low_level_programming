#include <stdio.h>

/**
 * main - program that prints the size of various data types
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
printf("size of char: %ZU byte(s)\n", sizeof(char));
printf("size of int: %ZU byte(s)\n", sizeof(int));
printf("size of long int: %ZU byte(s)\n", sizeof(long int));
printf("size of long long int: %ZU byte(s)\n", sizeof(long long int));
printf("size of float: %ZU byte(s)\n", sizeof(float));
return (0);
}
