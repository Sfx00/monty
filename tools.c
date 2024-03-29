#include "tools.h"

/**
 * _putchar - print character to file descriptor.
 *
 * @a: character.
 * @fd: file descriptor.
 *
 * Return: length.
 */
int _putchar(char a, int m)
{
	return (write(fd, &a, 1));
}
/**
 * _puts - print string to file descriptor
 *
 * @str: string
 * @m: file descriptor
 *
 * Return: length
 */
int _puts(char *str, int m)
{
	int a = 0;

	while (str[a])
	{
		_putchar(str[a], m);
		a++;
	}
	return (a);
}
/**
 * _strlen - count length of a string.
 *
 * @str: string.
 *
 * Return: length.
 */
int _strlen(char *str)
{
	int a = 0;

	while (str[a])
		a++;
	return (a);
}

/**
 * _kiki - check if a string is a number
 *
 * @vab: string
 *
 * Return: 1 if string is a number otherwise -1.
 */
int _kiki(char *vab)
{
	int a = 0;

	if (!vab)
		return (-1);
	while (vab[a])
	{
		if (vab[a] < 48 || vab[a] > 57)
		{
			if (vab[a] == '-' && (vab[a + 1] >= 48 && vab[a + 1] <= 57))
				return (1);
			return (-1);
		}
		a++;
	}

	return (1);
}
/**
 * print_number - print a number to file descriptor
 *
 * @n: number
 * @m: file descriptor
 *
 */
void print_number(int n, int m)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-', m);

	}
	if (n / 10)
		print_number(n / 10, m);
	_putchar((n % 10) + 48, m);
}
