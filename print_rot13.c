#include "main.h"

/**
 * print_rot13 - custom conversion specifier.
 * @rot: parameter
 *
 * Return: return count
 */

int print_rot13(char *rot)
{
	int i, j;
	int count = 0;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char result[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	i = 0;
	while (rot[i] != 0)
	{
		if ((rot[i] >= 'A' && rot[i] <= 'Z') || (rot[i] >= 'a' && rot[i] <= 'z'))
		{
			for (j = 0; j < 52; j++)
			{
				if (rot[i] == alpha[j])
				{
					count += putchar(result[j]);
				}
			}
		}
		else
			count += putchar(result[j]);
		i++;
	}
	return (count);
}
