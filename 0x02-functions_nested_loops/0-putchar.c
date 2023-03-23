#include "unistd.h"

/**
 * _putchar writes the character c to stdout main - Entry point
 * @C: The character to print
 *
 * Return: Always returns 0
 *
 */
int _putchar(char c)
{
	return (write (1, &c, 1));
	return (0);
}
