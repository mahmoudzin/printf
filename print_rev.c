#include "main.h"

/**
 * print_ reverse - reversed string.
 * @r: parameter
 *
 * Return: return count
 */

int print_ reverse(va_list r)
{
	int i, count = 0;
	char *ch;

	ch = va_arg(r, char *);
	if (ch == NULL)
		ch = ")llun(";
	for (i = 0; ch[i] != '\0'; i++)
		continue;
	for (i = i - 1; i >= 0; i--)
	{
		char a = ch[i];

		count += (write(1, &a, 1), 1);
	}
	return (count);
}
