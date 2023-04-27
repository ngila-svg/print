#include "main.h"

/**
 * _print_binary - Print an integer in binary format
 *
 * @args: Argument list containing integer to print
 *
 * Return: Number of characters printed
 */
int _print_binary(va_list args)
{
    int num = va_arg(args, int);
    int printed_chars = 0;
    int bit = 0;

    if (num < 0)
    {
        _putchar('-');
        printed_chars++;
        num = -num;
    }
    if (num == 0)
    {
        _putchar('0');
        printed_chars++;
        return (printed_chars);
    }
    for (bit = (sizeof(int) * 8) - 1; bit >= 0; bit--)
    {
        if (num & (1 << bit))
        {
            _putchar('1');
            printed_chars++;
        }
        else if (printed_chars > 0)
        {
            _putchar('0');
            printed_chars++;
        }
    }
    return (printed_chars);
}

