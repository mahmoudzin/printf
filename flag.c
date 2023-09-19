#include "main.h"


/**
 * print_flag - printf flags.
 * @c: parameter
 * @f: parameter
 *
 * Return: 1 if find flag, otherwise 0.
 */

int print_flag(char c, flag_t *f)
{
	int i = 0;

	switch (c)
	{
		case '+':
		{
			(*f).plus = 1;
			i = 1;
			break;
		}
		case ' ':
		{
			(*f).space = 1;
			i = 1;
			break;
		}
		case '#':
		{
			(*f).hash = 1;
			i = 1;
			break;
		}
	}
	return (i);
}
