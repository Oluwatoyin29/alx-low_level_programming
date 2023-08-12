#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Prints alphabet
 * void: it is not going receive any argurment.
 *
 * Description: Prints the alphabets in reverse order
 * can only use the putchar
 *
 * Return: returns 0 
*/
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}

