#include "main.h"

/*
* print_str - writes a string
* @arg: input
* @buf: buf ptr
* @ibuf: index buf ptr
* return: 1 on success
*/
int print_s(va_list arg, char *buf, unsigned int ibuf)
{
    char *str;
    unsigned int i;
    char nill[] = "(null)";

    str = va_arg(arg, char *);
    if (str == NULL)
    {
        for (i = 0; nill[i]; i++)
            ibuf = handl_buf(buf, nill[i], ibuf);
            return (6);
    }
    for (i = 0; str[i]; i++)
        ibuf = handl_buf(buf, str[i], ibuf);
        return (i);
}