#include "main.h"

/**
 * _memset - Fill a memory block with a value.
 * @s: Pointer to the start of the memory block.
 * @b: The value to fill the block with.
 * @n: Number of bytes to fill.
 *
 * Return: Pointer to the modified memory block.
 */
char *_memset(char *s, char b, unsigned int n)
{
    int i = 0;

    for (; n > 0; i++, n--)
    {
        s[i] = b;
    }
    return (s);
}

