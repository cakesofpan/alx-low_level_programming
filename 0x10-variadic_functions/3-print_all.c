#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format:list of arguments to be passed
 *
 * Return: NULL
 */
void print_all(const char * const format, ...)
{
    const char* ptr = format;
    char c;
    int i;
    float f;
    char* s;

    va_list args;

    va_start(args, format);
    while (*ptr != '\0') {
        if (*ptr == 'c') {
            c = (char)va_arg(args, int);
            printf("%c, ", c);
        } else if (*ptr == 'i') {
            i = va_arg(args, int);
            printf("%d, ", i);
        } else if (*ptr == 'f') {
            f = (float)va_arg(args, double);
            printf("%f, ", f);
        } else if (*ptr == 's') {
            s = va_arg(args, char*);
            if (s == NULL) {
                printf("(nil)");
            } else {
                printf("%s", s);
            }
        }

        ptr++;
    }

    va_end(args);
    printf("\n");
}
