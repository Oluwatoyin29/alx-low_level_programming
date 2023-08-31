#include "main.h"
/**
 * _puts_recursion - this prints a string
 * @s:string
 * Return: to return void
 */
void _puts_recursion(char *s)
{
if (*s)
{
	_putchar(*s);
	_puts_recursion(s + 1);
}
else
{
	_putchar('\n');
}

}

