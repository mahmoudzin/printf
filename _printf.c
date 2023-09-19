#include "main.h"

/**
 * _printf - produces output according to a format.
 * @format: parameter
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int count = 0;
	va_list list;

	if (format == NULL)
		return (-1);

	va_start(list, format);
	while (*format)
	{
		if (*format != '%')
			count += (write(1, format, 1));
		else
		{
			format++;
			if (*format == '%')
			{
				count += (write(1, format, 1));
			}
			else if (*format == 'c')
			{
				char c = va_arg(list, int);

				count += (write(1, &c, 1));
			}
			else if (*format == 's')
			{
				char *str = va_arg(list, char *);
				int str_len = strlen(str);

				count += (write(1, str, str_len));
			}
		}
		format++;
	}
	va_end(list);
	return (count);
}
