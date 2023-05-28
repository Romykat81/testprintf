#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
* struct print - print functions 
* @type_arg: identifier
* @f: pointer to printer functions
* struct that stores pointers to print
*/
typedef struct print
{
    char *type_arg;
    int (*f)(va_list, char *, unsigned int);
}print_t

int _printf(const char *format, ...);
int print_chr(va_list arg, char *buf, unsigned int buf);
unsigned int handl_buf(char *buf, char c, unsigned int ibuf);
int ev_print_func(const char *s, int index);