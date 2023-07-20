#include "main.h"
#include <unistd.h>
/**
 *_putchar - writes the character c to stdout
 *@c: The character to prints
 *
 * Return: on success 1
 * On erro, -1 is returned, and no erro is set appropriately
 */
int _putchar(char c)
{
       return (write(1, &c, 1));
}
