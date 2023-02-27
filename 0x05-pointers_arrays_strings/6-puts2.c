#include <stdio.h>
#include <string.h>

/**
 * puts2 - prints every other character of a string,
 *
 * starting with the first character
 * @str: pointer to the string to print
 *
 * Return: void
 */
void puts2(char *str)
{
int i = 0;

while (str[i] != '\0')
{
_putchar(str[i]);
i += 2;
}
_putchar('\n');
}
