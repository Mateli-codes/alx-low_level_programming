#include "main.h"
/**
 * _isalpha - Checks for uppercase character
 * @c: The character to be checked
 * Return: 1 for uppercase character or 0 for anything else
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 99) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
