#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <limits.h>

#define BUFF_SIZE 1024

/**
 * struct flag - sturct.
 * @Plus: parameter1
 * @Space: parameter2
 * @Hash: parameter3
 */

typedef struct flag
{
	int plus;
	int space;
	int hash;
} flag_t;

/**
 * struct str_ct - struct
 * @c: parameter1
 * @f: parameter2
 */

typedef struct str_ct
{
	char *c;
	int (*f)(va_list list, flag_t *f);
} str_ct;

/* print */
int _printf(const char *format, ...);
int print_rot13(char *rot);
int print_reverse(va_list r);

#endif
