#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdio.h> /* moved from printf.c */
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>
#include <stdlib.h>
/**
 * struct id_function - structure of function and id
 * @id: identifiers of conversion
 * @f: function pointer of id.
 */
typedef struct id_function
{
	char id;
	int (*f)();
}function_t;
int _printf(const char *format, ...);
int _putchar(char c);
int _printf_c(va_list flist);
int _printf_s(va_list flist);

#endif
