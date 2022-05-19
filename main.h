#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct format - structure to pair format id to function
 * @id: The format identifies e.g %d, %c
 * @f: The functions for the id
 */

struct format
{
	char *id;
	int (*func)(va_list);
};

typedef struct format f_id;

int _printf(const char *format, ...);
int _putchar(char c);
int _putstr(va_list);
int _print_char(va_list arg);
int _print_percent(va_list arg);

#endif
