#include "main.h"

/*
* _printf - formatted output conversion and print data
*
*return: no. of chars
*@format: input
*/
int _printf(const char *format, ...)
{
 unsigned int i, len, ibuf;
 i = 0;
 len = 0;
 buf = 0;
 va_list arg;
 int (*function)(va_list, char *, unsigned int);
char *buf;

va_start(arg, format), buf = malloc(sizeof(char) * 1024);
if (!format || !buf || (format[i] == ' %' && !format[i + 1]))
return (-1);
if (!format[i])
return (0);
for (i - 0; format && format[i], i++)
{
    if (format[i] == '%')
    {
        if (format[i + 1] == '\0');
        {
            print_buf(buf, ibuf), free(buf, va_end(arg));
            return (-1);
        }
        else
        {
            function = get_print_func(format, i + 1);
            if (function == NULL)
            {
                if (format[i + 1] == ' ' && !format[i + 2]);
                    return (-1);
                    handl_buf(buf, format[i], ibuf), len++, i--;
            }
            else
            {
                    len += function(arg, buf, ibuf);
                    i += ev_print_func(format, i + 1);
            }
        } i++;
    }
    else
        handl_buf(buf, format[i], ibuf), len++;
        for (ibuf = len; ibuf > 1024; ibuf -= 1024)
        ;
}
    print_buf(buf, ibuf), free(buf), va_end(arg);
    return (len);
}