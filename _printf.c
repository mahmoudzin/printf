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
		{
			write(1, format, 1);
				count++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == '%')
			{
				write(1, format, 1);
				count++;
			}
			else if (*format == 'c')
			{
				char c = (char)va_arg(list, int);

				write(1, &c, 1);
				count++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(list, char *);
				int str_len = 0;
				
				while (str[str_len] != '\0')
					str_len++;

				write(1, str, str_len);
				count += str_len;
			}
		}
		format++;
	}
	va_end(list);
	return (count);
}
