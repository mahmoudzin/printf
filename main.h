#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <limits.h>

int _printf(const char *format, ...);
int print_rot13(char *rot);
int print_reverse(va_list r);

#endif
