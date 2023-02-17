#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alp1[26] = "abcdefghijklmnopqrstuvwxyz";
char alp2[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;
for (i = 0; i <= 25; i++)
{
putchar(alp1[i]);
}
for (i = 0; i <= 25; i++)
{
putchar(alp2[i]);
}
putchar('\n');
return (0);
}
