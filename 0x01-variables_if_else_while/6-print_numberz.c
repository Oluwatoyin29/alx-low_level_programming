#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Prints base 10 numbers
 * void: it is not going receive any argurment.
 *
 * Description: Prints numbers 0-9
 *
 * Return: returns zero 0 on success
*/
int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
