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
	char a;
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
					a = result[j];
					count += (write(1, &a, 1), 1);
				}
			}
		} else
		
			count += (write(1, &a, 1), 1);
		i++;
	}
	return (count);
}
