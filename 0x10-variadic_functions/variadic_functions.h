#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
  * struct prints - prints an arg
  *
  * @format: format of the arg
  * @function: says how to print the arg
  */
typedef struct prints
{
	char *form;
	void (*function)(va_list);
} print_t;
void print_c(va_list ch);
void print_i(va_list entero);
void print_f(va_list flotante);
void print_s(va_list cadena);

#endif
