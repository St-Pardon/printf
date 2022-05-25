#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct format - structure to pair format id to function
 * @id: The format identifies e.g %d, %c
 * @func: The functions for the id
 *
 * Description: strut that stores pointers to a printer functions
 */

struct format
{
	char *id;
	int (*func)(va_list);
};

typedef struct format f_id;

int _printf(const char *format, ...);
int _identifier(const char *format, f_id func_list[], va_list args);
int _putchar(char c);
int _putstr(va_list);
int _print_char(va_list arg);
int _print_percent(va_list arg);
int print_number(va_list);
int _print_int(va_list arg);
int int_length(unsigned int n);
int get_exponent(int len);
int _print_binary(va_list);
unsigned int binary_len(unsigned int, int);
char *rev_string(char *);
void _putbase(char *str);
char *_cpymem(char *dest, char *src, unsigned int n);
int rot13(va_list);
int _print_reversed(va_list);
int unsigned_int(va_list arg);
int print_unsgined(unsigned int num);
int _hex_check(int, char);
int _print_octal(va_list);
int _print_hex(va_list);
int _print_heX(va_list);
int _hex_check(int, char);

#endif
